/**
El dueño del gimnasio Laragym nos pide que realicemos un programa que les permita cargar
todas los entrenamientos de sus 50 clientes, cada registro de entrenamiento contiene:
-	Numero de Entrenamiento (1 - 9999)
-	Cliente (101- 150)
-	Tipo de Entrenamiento ( 1 - 10 )
-	Tiempo del Entrenamiento (minutos)

Puede haber varios registros de entrenamiento por cliente. La información no se encuentra
agrupada ni ordenada. El fin de la carga de entrenamientos se indica con un número de
entrenamiento igual a cero, informar:
-	Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos,
    ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
-	Por cada cliente, los tipos de entrenamiento que realizó.
-	Por cada cada cliente y tipo de entrenamiento, la cantidad total de minutos entrenados.
Sólo listar aquellos registros que sean superiores a 0.
-	El número de cliente que más tiempo haya entrenado.
-	Los tipos de entrenamiento que no se realizaron por ningún cliente.


PASOS A SEGUIR PARA RESOLVER EL EJERCICIO
1) cuales son los datos de entrada:
cual es el registro? El numero de entrenamiento
2) se carga uno o muchos entrenamientos?
varios
3) si no dijera que la info no se encuentra agrupada, ni ordenada, es lo mismo que figure o no.
En este caso, si es asi, no se usan ciclos combinados para cargar los datos. Va a ser solo un unico
ciclo repetitivo (while, ya que no se sabe la cant de entrenamientos)
4)verifico como corta el ciclo: num entrenamiento = 0.
5) el ultimo registro con num entrenamiento = 0, se ignora o se muestra?
en este caso se ignora. Por ende, se pide al principio y al final. (si no se ignorara,
usamos un do while y se pide al principio.


*/

#include <iostream>
#include "funciones.h"

using namespace std;


int main()
{
    int tiempo_entrenamiento[50]{};
    bool mTipos[50][10]{};
    bool vTipos[10]{};

    cargarDatos(tiempo_entrenamiento, mTipos, vTipos);
    cout << "PUNTO 1) Tiempo de entrenamientos por cliente" << endl;
    mostrarTiempoEntrenamiento(tiempo_entrenamiento, 50);
    cout << "PUNTO 2) Tipo de entrenamientos por cliente" << endl;
    mostrarClienteTipos(mTipos, 50);
    cout << "PUNTO 3) Tipo de entrenamientos no realizados" << endl;
    mostrarTiposNoEntrenados(vTipos, 10);




    return 0;
}
