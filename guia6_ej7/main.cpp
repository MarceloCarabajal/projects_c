/**
Se ingresa por teclado en un vector de 10 elementos,
9 números todos distintos entre sí y ordenados de menor
a mayor. Se pide ingresar otro valor e insertarlo en el
orden correspondiente y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 4 5 6 7 10 12 16}
Número ingresado: 9
Vector → {1 3 4 5 6 7 9 10 12 16}

*/

#include <iostream>

using namespace std;

int main()
{
    const int TAM = 10;
    int i, valor, vec[TAM] = {1, 3, 4, 5, 6, 7, 10, 12, 16};
    int aux = 0;

    cout << "Ingrese un numero para el vector: ";
    cin >> valor;  //15

    for(i=9-1; i>=0 && vec[i] > valor ; i--){
        aux = valor;
        vec[i+1] = vec[i];
        vec[i] = aux;
    }

    cout << "Ordenado con nuevo valor:" << endl;
    for(i=0; i<10; i++){
        cout << vec[i] << " ";
    }

    vec[i+1] = valor;

    return 0;
}
