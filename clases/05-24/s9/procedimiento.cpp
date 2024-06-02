#include <iostream>

#include "variables.h"

using namespace std;

void agregarNota() {
  if (indice < MAX) {
    cout << "ingresar nota: ";
    cin >> notas[indice];

    indice++;
  } else {
    cout << "no se pueden ingresar mas notas" << endl;
  }
}

void mostrarNotas() {
  for (int i = 0; i < indice; i++) {
    cout << "nota " << i + 1 << ": " << notas[i] << endl;
  }
}

void notaAlta() {
  float mayor = 0;

  for (int i = 0; i < indice; i++) {
    if (notas[i] > mayor) {
      mayor = notas[i];
    }
  }

  cout << "la nota mas alta es: " << mayor << endl;
}

void notaBaja() {
  float menor = notas[0];

  for (int i = 1; i < indice; i++) {
    if (notas[i] < menor) {
      menor = notas[i];
    }
  }

  cout << "la nota mas baja es: " << menor << endl;
}

void promedio() {
  float suma = 0;

  for (int i = 0; i < indice; i++) {
    suma += notas[i];
  }

  float promedio = suma / indice;

  cout << "el promedio es: " << promedio << endl;
}
