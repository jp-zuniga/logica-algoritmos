// Escribe un programa que solicite al usuario un número
// entero no negativo y calcule su factorial.

#include <iostream>

using namespace std;

int main() {
  int num, i = 1, factorial = 1;

  cout << "ingresar un numero entero no negativo: ";
  cin >> num;

  if (num >= 0) {
    while (i <= num) {
      factorial *= i;
      i++;
    }

    cout << "el factorial de " << num << " es: " << factorial << endl;
  } else {
    cout << "los factoriales de los numeros negativos no estan definidos"
         << endl;
  }

  return 0;
}
