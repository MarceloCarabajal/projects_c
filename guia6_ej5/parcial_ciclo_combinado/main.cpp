#include <iostream>

using namespace std;

int main()
{
    int cod_hortaliza;
    const int HORTALIZAS = 2;
    int cod_localidad;
    float cantidad_toneladas_previstas;
    float cantidad_toneladas_cosechadas;
    float inversion_millones;

    //PUNTO A)
    int pa_cant_localidades_cosecha_menor;

    //PUNTO B)
    float pb_acum_cosechadas = 0;
    float pb_acum_previstas = 0;
    float pb_porcentaje_cosechada;
    float pb_porcentaje_prevista;
    float pb_acum_cosechas = 0;

    //PUNTO C)
    int cant_inversion_mas_cien = 0;

    // PUNTO D)
    bool band_menor = false;
    int pd_menor_toneladas = 0;
    int pd_localidad = 0;

    for(int i=0; i<HORTALIZAS; i++)
    {

        pa_cant_localidades_cosecha_menor = 0;

        cout << i+1 << " # Ingrese cod hortaliza (entre 10 - 50): ";
        cin >> cod_hortaliza;

        if (cod_hortaliza < 10 || cod_hortaliza > 50)
        {
            cout << "El código de hortaliza debe estar entre 10 y 50" << endl;
            i--; // se resta i para repetir el ciclo con el mismo num de hortalizas
            continue;
        }

        cout << "Ingrese cod localidad (entero entre 4000 y 9000): ";
        cin >> cod_localidad;

        while(cod_localidad != 0)
        {

            cout << "Cant de toneladas previstas: ";
            cin >> cantidad_toneladas_previstas;
            cout << "Cant de toneladas cosechadas: ";
            cin >> cantidad_toneladas_cosechadas;
            cout << "Ingrese inversion en millones: ";
            cin >> inversion_millones;

            //Punto B
            pb_acum_cosechadas += cantidad_toneladas_cosechadas;
            pb_acum_previstas += cantidad_toneladas_previstas;


            cout << "Ingrese cod localidad: ";
            cin >> cod_localidad;

            //Punto A
            if(cantidad_toneladas_cosechadas < cantidad_toneladas_previstas)
            {
                pa_cant_localidades_cosecha_menor++;
            }

            //Punto C
            if(inversion_millones > 100){
                    cant_inversion_mas_cien++;
                }

            //Punto D
            if(cod_localidad == 20 && cantidad_toneladas_cosechadas < pd_menor_toneladas){
                    if(band_menor == false ){
                        pd_menor_toneladas = cantidad_toneladas_cosechadas;
                        pd_localidad = cod_localidad;
                        band_menor = true;

                    }else{
                    pd_menor_toneladas = cantidad_toneladas_cosechadas;
                    pd_localidad = cod_localidad;
                    }
                }

        }
        //Punto B
        pb_acum_cosechas += cantidad_toneladas_cosechadas;

    }

    //Punto B
    pb_porcentaje_cosechada = (pb_acum_cosechas / pb_acum_previstas) * 100;
    pb_porcentaje_prevista = 100 - pb_porcentaje_cosechada;

    cout << endl << endl;

    cout << "B) porcentaje cosechados: " << pb_porcentaje_cosechada << endl;
    cout << "B) porcentaje previstos: " << pb_porcentaje_prevista << endl;
    cout << endl << endl;

    //Punto A
    cout << "A) cantidad de localidades con cosechados menores a los previstos: " << pa_cant_localidades_cosecha_menor << endl;

    //Punto C
    cout << "C) cantidad de hortalizas por las que se realizo una inversion totalizada de mas de 100 millones: " << cant_inversion_mas_cien << endl;

    //Punto D
    cout << "D) La localidad con la menor cantidad total de toneladas cosechadas de la hortaliza con código 20: " << pd_localidad << endl;

    return 0;

}



/**
#include <iostream>

using namespace std;

int main()
{
    int cod_hortaliza;
    const int HORTALIZAS = 2;
    int cod_localidad;
    float cantidad_toneladas_previstas;
    float cantidad_toneladas_cosechadas;
    float inversion_millones;

    /// Punto A
    int cant_localidades_cosecha_menor;

    /// Punto B
    float pb_acum_cosechadas = 0;
    float pb_acum_previstas = 0;
    float pb_porcentaje_cosechada;
    float pb_porcentaje_prevista;
    float pb_acum_cosechas = 0;

    /// Punto C
    int cant_inversion_mas_cien = 0;

    for(int i=1; i<=HORTALIZAS; i++){

            /// Punto a
            cant_localidades_cosecha_menor = 0;

            cout << "Ingrese cod hortaliza (entre 10 - 50): ";
            cin >> cod_hortaliza;

            if (cod_hortaliza < 10 || cod_hortaliza > 50) {
                cout << "El código de hortaliza debe estar entre 10 y 50" << endl;
                i--; // Restar i para repetir el ciclo con el mismo número de hortalizas
                continue;
            }

            cout << "Ingrese cod localidad: ";
            cin >> cod_localidad;

            while(cod_localidad != 0){

                cout << "Cantidad de toneladas previstas: ";
                cin >> cantidad_toneladas_previstas;
                cout << "Cantidad de toneladas cosechadas: ";
                cin >> cantidad_toneladas_cosechadas;
                cout << "Ingrese inversion en millones: ";
                cin >> inversion_millones;

                pb_acum_cosechadas += cantidad_toneladas_cosechadas;
                pb_acum_previstas += cantidad_toneladas_previstas;

                /// Punto A
                if(cantidad_toneladas_cosechadas < cantidad_toneladas_previstas){
                    cant_localidades_cosecha_menor++;
                }

                /// Punto C
                if(inversion_millones > 100){
                    cant_inversion_mas_cien++;
                }

                cout << "Ingrese cod localidad (0 para finalizar): ";
                cin >> cod_localidad;
            }

            /// Punto B
            pb_acum_cosechas += cantidad_toneladas_cosechadas;
        }

    pb_porcentaje_cosechada = (pb_acum_cosechas / pb_acum_previstas) * 100;
    pb_porcentaje_prevista = 100 - pb_porcentaje_cosechada;

    /// Punto A
    cout << "Punto A:" << endl;
    cout << "Cantidad de localidades con cosecha menor a la prevista por hortaliza: " << cant_localidades_cosecha_menor << endl;

    /// Punto B
    cout << "Punto B:" << endl;
    cout << "Porcentaje de toneladas cosechadas: " << pb_porcentaje_cosechada << "%" << endl;
    cout << "Porcentaje de toneladas previstas sin cosechar: " << pb_porcentaje_prevista << "%" << endl;

    /// Punto C
    cout << "Punto C:" << endl;
    cout << "Cantidad de hortalizas con inversión totalizada de más de 100 millones: " << cant_inversion_mas_cien << endl;

    return 0;
}

*/
