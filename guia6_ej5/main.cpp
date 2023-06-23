/**
Cargar un conjunto de 100 números reales y formar con los valores positivos un vector
llamado pos y con los valores negativos un vector llamado nega. Mostrar por pantalla
la cantidad de elementos que contiene cada vector y luego cada uno de los vectores.
Sólo deben utilizarse dos vectores en el programa: pos y nega.

*/


#include <iostream>

using namespace std;

int main()
{
    const int MAX = 5;
    float pos[MAX] = {};
    float nega[MAX] = {};
    int i;
    int cont_pos = 0;
    int cont_nega = 0;

    for(i=0; i<MAX; i++){
        float num;
        cout << "Ingrese numero " << i+1 << ": ";
        cin >> num;

        if(num >= 0){
            pos[cont_pos] = num;
            cont_pos++;
        }else{
            nega[cont_pos] = num;
            cont_nega++;
        }
    }

    //MOSTRAR ELEMENTOS POSITIVOS
    for(i=0; i<cont_pos; i++){
        cout << "Elemento de POS #" << i+1 << ": " << pos[i] << endl;
    }

    //MOSTRAR ELEMENTOS NEGATIVOS
    for(i=0; i<cont_nega; i++){
        cout << "Elemento de NEGA #" << i+1 << ": " << nega[i] << endl;
    }

    cout << "\nCantidad de positivos: " << cont_pos << endl;
    cout << "Cantidad de negativos: " << cont_nega << endl;


    return 0;
}




