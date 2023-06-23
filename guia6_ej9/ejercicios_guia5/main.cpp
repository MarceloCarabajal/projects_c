/**
4) Escribir un subprograma para que dados dos números enteros,
calcule y devuelva la potencia del primero a la del segundo.
Por ejemplo si la rutina recibe 2 y 3 respectivamente, el cálculo
que generará será 8 (2 a la potencia 3).

7) Escribir un subprograma llamado PAR que devuelva 1 si el número
recibido es par y 0 si es impar. Luego hacer un programa para que
dada una lista de números que finaliza con cero informa cuantos de
ellos eran pares y cuantos impares.

*/

#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    // EJERCICIO 4
    int base, exponente, resultado;

    cout << "ingrese base: ";
    cin >> base;

    cout << "ingrese exponente: ";
    cin >> exponente;

    resultado = potencia(base, exponente);

    cout << "la potencia es: " << resultado << endl;

    /* EJERCICIO 7


    int numero;
    int pares = 0;
    int impares = 0;

    cout << "Ingrese numero (finaliza con 0): "<< endl;
    cin >> numero;


    while(numero != 0) {
        if(PAR(numero) == 1){
            pares++;
        }else{
            impares++;
        }

    cout << "Ingrese numero (finaliza con 0): "<< endl;
    cin >> numero;
    }

    cout << "Cantidad de pares: " << pares << endl;
    cout << "Cantidad de impares: " << impares << endl;
    */



    return 0;
}
