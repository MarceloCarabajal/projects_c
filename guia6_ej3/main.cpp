/**
Hacer un programa donde se carguen 15 números enteros y luego muestre por
pantalla el mínimo elemento del vector y además indique cuántas veces se
repite el valor mínimo dentro del vector.
*/

#include <iostream>

using namespace std;

int main()
{
    const int INDICE = 5;
    int numero[INDICE], i;
    int minimo;
    int cont = 0;

    for(i=0; i<INDICE; i++){
        cout << "Ingrese numero #" << i+1 << ": ";
        cin >> numero[i];
    }

    minimo = numero[0];
    for(i=1; i<INDICE; i++){
        if(numero[i] < minimo){
            minimo = numero[i];
        }
    }

    for(i=0; i<INDICE; i++){
        if(numero[i] == minimo){
            cont++;
        }
    }

    cout << "\nEl minimo valor encontrado es: " << minimo << endl;
    cout << "Se repite " << cont << " vez/veces." << endl;

    return 0;
}
