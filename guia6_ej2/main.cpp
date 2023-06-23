/**
Hacer un programa donde se carguen 15 números enteros y luego le solicite al usuario
un número e indique si el mismo pertenece a la lista cargada anteriormente.
*/


#include <iostream>

using namespace std;

int main()
{
    const int INDICE = 5;
    int numero[INDICE], i;
    int numero_evaluar;

    for(i=0; i<INDICE; i++){
        cout << "Ingrese numero #" << i+1 << ": ";
        cin >> numero[i];
    }
    cout << "Ingrese el numero a evaluar: ";
    cin >> numero_evaluar;

    bool encontrado = false;

    for(i=0; i<INDICE; i++){
        if(numero[i] ==  numero_evaluar){
            encontrado = true;
        }
    }

    if(encontrado == true){
        cout << "\nPertenece a la lista ingresada el numero " << numero_evaluar << endl;
    }else{
        cout << "\nNO pertenece a la lista."  << endl;
    }

    return 0;
}
