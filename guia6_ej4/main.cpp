/**
Se dispone de las ventas de un negocio durante el mes pasado.
Por cada venta se registró el número de venta, el número de día
y el importe de la venta. El fin de la carga de datos se indica
con número de venta igual a 0.
Se pide calcular e informar:
Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
El número de día que más se recaudó en total y cuál fue la recaudación máxima.




#include <iostream>

using namespace std;

int main()
{
    const int DIAS = 30;
    int n_venta;
    int total[DIAS] = {}, dia, i, max_dia = 0;
    float importe, max_recaudacion = 0;
    bool bandera = false;

    cout << "Ingrese num de venta: ";
    cin >> n_venta;

    while(n_venta != 0){

        cout << "Dia num: ";
        cin >> dia;
        cout << "Importe: ";
        cin >> importe;
        total[dia-1] += importe;

        cout << "Ing
        rese num de venta: ";
        cin >> n_venta;
        }

    //Punto A)
    for(i=0; i<DIAS; i++){
            if(total[i]>0){
                cout << "\nRecaudacion del dia " << i+1 << " es: " << total[i] <<"$" << endl;
            }
            //Punto B)
            if(bandera == false){
                max_dia = i+1;
                max_recaudacion = total[i];
                bandera = true;
            }else{
                if(total[i] > max_recaudacion){
                    max_dia = i+1;
                    max_recaudacion = total[i];
                }
            }

    }

    cout << "\nEl numero de dia con mas recaudacion es: " << max_dia << endl;
    cout << "La recaudacion maxima es: " << max_recaudacion << endl;

    return 0;
}


*/




#include <iostream>

using namespace std;

int main()
{
    /*Se ingresa por teclado en un vector de 10 elementos, 9 números todos distintos entre sí y ordenados de menor a mayor.
     Se pide ingresar otro valor e insertarlo en el orden correspondiente y desplazar todos los elementos un lugar.

    Ejemplo:
    Vector → {1 3 4 5 6 7 10 12 16}
    Número ingresado: 9
    Vector → {1 3 4 5 6 7 9 10 12 16}
    */

    int x,v[10]= {},aux, ingreso;


    for(x=1; x<10; x++)
    {


        cout<<"Cargue el vector "<<endl;
        cin>>v[x];


    }

    cout<<"ingrese el numero extra"<<endl;
    cin>>ingreso;


    for(x=1; x<10; x++)
    {

        if(ingreso>v[x]&&(ingreso<v[x+1]))
        {

            aux=x;
        }

    }
    for(x=1; v[x]<=aux; x++)
    {


        v[x-1]=v[x];
    }

    v[aux]=ingreso;

    for(x=0; x<10; x++)
    {
        cout<<" La fila de numeros quedo asi "<<v[x]<<endl;

    }

    return 0;
}
