#include <iostream>
#include "funciones.h"
#include <ctime>
#include <cstdio>



// INICIAR SEMILLA
void iniciarSemilla() {
    srand(time(0));
}


// NUMERO ALEATORIO
int numAleatorio() {
  int resultado;

  resultado = rand() % 99 + 0;

  return resultado;
}
