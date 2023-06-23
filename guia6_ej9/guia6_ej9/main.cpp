/**
Una fábrica tiene 80 empleados, y dispone de un primer lote de registros con la siguiente información:
- Nro. empleado (1 a 80)
- Valor de una hora de trabajo
- Valor de la hora extra de trabajo

A fin de mes se desean calcular los sueldos de los empleados que trabajaron y para ello se cuenta con
un segundo lote de registros con la siguiente información:
- Nro. empleado (1 a 80)
- Día
- Total de horas trabajadas en el día

Este lote finaliza con un registro con nro. de empleado igual a cero, y sólo figuran los registros de
los empleados que trabajaron durante el mes. Calcular e informar el sueldo de cada uno de los empleados,
teniendo en cuenta que a partir de la 9na hora del día se comienza a pagar como hora extra.


1)Datos de entrada, registro: empleado
2)se carga que cantidad de empleados:
3) si no dijera que la info no se encuentra agrupada, ni ordenada, es lo mismo que figure o no.
En este caso, si es asi, no se usan ciclos combinados para cargar los datos. Va a ser solo un unico
ciclo repetitivo (while, ya que no se sabe la cant de entrenamientos)
4)verifico como corta el ciclo: num emp != 0.
5) el ultimo registro con num entrenamiento = 0, se ignora o se muestra?
en este caso se ignora. Por ende, se pide al principio y al final. (si no se ignorara,
usamos un do while y se pide al principio.

*/

#include <iostream>

using namespace std;

int main()
{
    const int cantEmpleados = 80;
    int empleado, horasTrabajadas, horasExtras, dia;
    float valHoraTrabajo[cantEmpleados] {};
    float valHoraExtra[cantEmpleados] {};
    float sueldo[cantEmpleados] {};
    //float sueldo = 0;
    int horasNormales = 8;

    for(int i=0; i<cantEmpleados; i++)
    {
        valHoraTrabajo[i] = 2;
        valHoraExtra[i] = 4;
    }

    cout << "Ingrese num empleado: (finaliza con num empleado = 0):";
    cin >> empleado;

    while(empleado !=0)
    {
        cout << "ingrese horas trabajadas: ";
        cin >> horasTrabajadas;

        cout << "ingrese dia: ";
        cin >> dia;

        /*if(horasTrabajadas <= 8){
            sueldo = valHoraTrabajo[empleado-1]* horasTrabajadas;
        }else{

            horasExtras = horasTrabajadas - 8;
            sueldo = valHoraTrabajo[empleado-1]*8 +(valHoraExtra[empleado-1]* horasExtras) ;
        }*/


        if(horasTrabajadas >8)
        {
            horasExtras = horasTrabajadas - horasNormales;
            sueldo[empleado-1] += ( horasNormales * valHoraTrabajo[empleado-1] ) + (horasExtras * valHoraExtra[empleado-1]);
        }
        else
        {
            sueldo[empleado-1] += horasTrabajadas * valHoraTrabajo[empleado-1];
        }
        cout << "sueldo empleado " << empleado << " es " << sueldo[empleado-1] << endl;



        cout << "Ingrese num empleado: (finaliza con num empleado = 0):";
        cin >> empleado;

    }


    return 0;
}
