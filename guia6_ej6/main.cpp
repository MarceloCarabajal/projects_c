/**
Se ingresa por teclado un vector de 10 elementos
todos distintos entre sí. Luego eliminar el valor
máximo y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 9 1 4 6 2 0 5 7 }, quedará → {1 3 1 4 6 2 0 5 7}
Nota: No mostrar el último elemento del vector.

*/

#include <iostream>

using namespace std;

int main()
{
    float numeros[10] = {};
    float maximo;
    int indiceMaximo;
    bool bandera = false;

    for(int i=0; i<10; i++){
        cout << "Ingrese numero #" << i+1 << ": ";
        cin >> numeros[i];
    }

    for(int i=0; i<10; i++){
        if(bandera == false){
            maximo = numeros[i];
            indiceMaximo = i;
            bandera = true;
        }else{
            if(numeros[i] > maximo){
                maximo = numeros[i];
                indiceMaximo = i;
            }
        }
    }

    for(int i=indiceMaximo; i<9; i++){
        numeros[i] = numeros[i+1];
    }

    cout << "El vector queda de la siguiente manera sin el maximo: " << endl;
    for(int i=0; i<9; i++){
        cout << numeros[i] << endl;
    }


    return 0;
}
