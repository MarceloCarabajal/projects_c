#include <iostream>

using namespace std;

int main()
{
    const int TAM =5;
    int notas[TAM] = {};

    //A)
    float promedio, sumaNotas = 0;
    int cantidadEstudiantesMayoresAlPromedio = 0;

    //B)

    for(int i=0; i<=TAM; i++)
    {
        cout << "Ingrese nota #" << i+1 << ": ";
        cin >> notas[i];
    }

    for(i=0; i<TAM; i++){
        sumaNotas += notas[i];
    }

    for(int i=0; i<TAM)


    return 0;
}
