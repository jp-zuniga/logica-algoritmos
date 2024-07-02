// Escribe un programa que solicite al usuario ingresar 10 números enteros, los
// almacene en un arreglo y luego encuentre y muestre el número más grande.

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

  i = 0;
  int mayor = numeros[0];
  while (i < MAX) {
    if (numeros[i] > mayor) {
      mayor = numeros[i];
    }

    i++;
  }

  cout << "el numero mas grande es: " << mayor << endl;
}
