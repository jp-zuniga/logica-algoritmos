// Escribe un programa que solicite al usuario ingresar 10 números enteros, los
// almacene en un arreglo y luego cuente y muestre la cantidad de números pares
// e impares.

#include <iostream>

#define MAX 10

using namespace std;

int main() {
  int numeros[MAX], i = 0;

  while (i < MAX) {
    cout << "ingresar numero " << i + 1 << ": ";
    cin >> numeros[i];
    i++;
  }

  int pares = 0, impares = 0;
  i = 0;

  while (i < MAX) {
    if (numeros[i] % 2 == 0) {
      pares++;
    } else {
      impares++;
    }

    i++;
  }

  cout << "cantidad de numeros pares: " << pares << endl;
  cout << "cantidad de numeros impares: " << impares << endl;

  return 0;
}
