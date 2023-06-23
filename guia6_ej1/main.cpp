/**
Hacer un programa que le pida al usuario una lista de 10 números enteros
y luego de ingresarlos muestre cuáles de ellos fueron positivos.
*/

#include <iostream>

using namespace std;

int main()
{
    const int INDICE = 5;
    int num[INDICE];

    for(int i=1; i<=INDICE; i++){
        cout << "Ingrese el numero #" << i << ": ";
        cin >> num[i];
    }

    for (int i=1; i<=INDICE; i++){
        if(num[i] > 0){
            cout << num[i];
        }
    }
    cout << endl << endl;

    return 0;
}
