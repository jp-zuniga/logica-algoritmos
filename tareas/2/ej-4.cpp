// Escribe un programa que solicite al usuario ingresar 5 números enteros, los
// almacene en un arreglo y luego calcule la suma de todos los elementos del
// arreglo.

#include <iostream>

#define MAX 5

using namespace std;

int main() {
  int numeros[MAX], i = 0, suma = 0;

  while (i < MAX) {
    cout << "ingresar numero " << i + 1 << ": ";
    cin >> numeros[i];
    suma += numeros[i];
    i++;
  }

  cout << "la suma de los numeros es: " << suma << endl;

  return 0;
}
