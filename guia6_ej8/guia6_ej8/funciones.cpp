#include <iostream>
#include "funciones.h"
using namespace std;


void cargarDatos(int tiempo_entrenamiento[], bool mTipos[][10], bool vTipos[])
{
    int entrenamiento;
    int cliente;
    int tipo_entrenamiento;
    int tiempo;

    cout << "Ingrese Numero de Entrenamiento (1 - 9999):";
    cin >> entrenamiento;

    while(entrenamiento != 0)
    {
        cout << "Ingrese Cliente (101- 150):";
        cin >> cliente;

        cout << "Ingrese Tipo de Entrenamiento ( 1 - 10):";
        cin >> tipo_entrenamiento;

        cout << "Tiempo del Entrenamiento (minutos):";
        cin >> tiempo;

        //Punto 1
        tiempo_entrenamiento[cliente-101] += tiempo;
        //Punto 2
        mTipos[cliente-101][tipo_entrenamiento-1] = true;
        //punto 3
        vTipos[tipo_entrenamiento-1] = true;

        cout << "Ingrese Numero de Entrenamiento (1 - 9999):";
        cin >> entrenamiento;
    }
}


void mostrarTiempoEntrenamiento(int tiempos[], int cant)
{

    for(int i=0; i<cant; i++)
    {
        int horas = tiempos[i]/60;
        int minutos = tiempos[i]%60;

        cout << "Cliente #" << i + 101
             << " Entreno " << horas <<" horas"
             << " con " << minutos << " minutos." << endl;
    }

}


void mostrarClienteTipos(bool mTipos[][10], int cant)
{
    //Recorre los clientes
    for(int i=0; i<cant; i++)
    {

        cout << "Cliente #" << i + 101 << endl;

        //Recorre los tipos
        for(int j=0; j<10; j++)
        {
            if(mTipos[i][j])
            {
                cout << "Tipo de entrenamiento #" << j+1 << endl;
            }
        }
    }
}

void mostrarTiposNoEntrenados(bool vTipos[], int cant){
    for(int i=0; i<cant; i++){
        if(!vTipos[i]){
            cout << i+1 << endl;
        }
    }
}
