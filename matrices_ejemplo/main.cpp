#include <iostream>

using namespace std;

int main()
{
    const int DIAS = 7;
    const int MATERIAS = 3;
    int horasEstudio[DIAS][MATERIAS] = {}, i, j;

    for(i=0; i<DIAS; i++){
        for(j=0; j<MATERIAS; j++){
            cout << "Cantidad de horas en el dia #" << i+1 << " para materia # " << j+1 << " :";
            cin >> horasEstudio[i][j];
        }

    }

    cout << endl << endl;

    int totalHoras;

    //CANTIDAD HORAS TOTALES POR MATERIA

    for(i=0; i<MATERIAS; i++){
        cout << "Materia #" << i+1 << endl;
        totalHoras = 0;
        for(j=0; j<DIAS; j++){
            totalHoras = horasEstudio[j][i];
    }
    cout << "Total h: " << totalHoras << endl ;

    }


    return 0;
}
