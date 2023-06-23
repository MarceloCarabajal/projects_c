/**
LaraRaffle es el sorteo más importante de Argentina. Se dispone de 100
números entre el 0 y el 99 que los participantes pueden elegir para su compra.
Cada número tiene un costo de $500. Entrega un premio al ganador de $30000 y al
segundo ganador de $5000.
Nos solicitan un programa que permita cargar los números comprados por los participantes.
El programa no debe permitir comprar más de una vez un número ya vendido. El fin de carga
de información se indica con número igual a -1.

Luego, sortear dos números al azar entre 0 y 99 e informar:
-	Total recaudado en concepto de compra de números.
-	Ganancia neta o pérdida del Sr Lara.
-	El porcentaje de números no vendidos con respecto al total.
-	Número ganador del primer premio y número ganador del segundo premio (no pueden
ser el mismo número). E indicar si esos números se vendieron o no.


Anotaciones:
vNum[100]


*/


#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    iniciarSemilla();

    const int TAM = 100;
    int vNum[TAM] {};
    int numComprado;
    bool vNumDisp[TAM] {};
    int puesto1, puesto2;
    int recaudacion = 0;
    int cuentaLara = 0;
    int vendidos = 0;
    int porcentaje_vendidos;
    int porcentaje_no_vendidos;


    for(int i=0; i<TAM; i++)
    {
        vNum[i] = i;
    }

    cout << "Ingrese el numero comprado (del 0 al 99): ";
    cin >> numComprado;

    while(numComprado != -1)
    {

        if(vNumDisp[numComprado] == false)
        {
            vNumDisp[numComprado] = true;
            cout << "Numero comprado: " << vNum[numComprado] << endl;
            recaudacion += 500;
            vendidos++;
        }
        else
        {
            cout << "NUMERO NO DISPONIBLE, ELIJA OTRO." << endl;
        }


        cout << "Ingrese el numero comprado (del 0 al 99): ";
        cin >> numComprado;
    }

    //PUNTO 4
    puesto1 = numAleatorio();
    puesto2 = numAleatorio();

    cout << "\nGanador puesto Num 1: " << puesto1 << endl;

    if(puesto2 == puesto1){
        puesto2 = numAleatorio();
        cout << "Ganador puesto Num 2: " << puesto2 << endl;
    }else{
        cout << "Ganador puesto Num 2: " << puesto2 << endl;
    }

    if(vNumDisp[puesto1] == true && vNumDisp[puesto2] == true){
        cout << "\nLos numeros fueron vendidos, hubo ganadores en los puestos!" << endl;
        cuentaLara = recaudacion - 35000;
    }

    if(vNumDisp[puesto1] == true && vNumDisp[puesto2] == false){
        cout << "\nEl numero del puesto 1 fue vendido, hubo ganador en este puesto!" << endl;
        cuentaLara = recaudacion - 30000;
    }

    if(vNumDisp[puesto1] == false && vNumDisp[puesto2] == true){
        cout << "\nEl numero del puesto 2 fue vendido, hubo ganador en este puesto!" << endl;
        cuentaLara = recaudacion - 5000;
    }

    if(vNumDisp[puesto1] == false && vNumDisp[puesto2] == false){
        cout << "\nLos numeros ganadores no fueron vendidos!" << endl;
        cuentaLara = recaudacion;
    }



    cout << "\nRecaudacion: " << recaudacion;


    if(cuentaLara > 0)
    {
        cout << "\nLa ganancia de Lara fue de: " << cuentaLara << endl;
    }
    else
    {
        cout << "\nLa perdida de Lara fue de: " << cuentaLara << endl;
    }

    porcentaje_vendidos = vendidos * 100 / TAM;
    porcentaje_no_vendidos = 100 - porcentaje_vendidos;

    cout << "\nporcentaje de números no vendidos con respecto al total: " << porcentaje_no_vendidos << "%" << endl;



    return 0;
}
