// Escribe un programa que pida al usuario ingresar números enteros positivos y
// calcule la suma de todos los números ingresados hasta que el usuario ingrese
// un número negativo.

#include <iostream>

using namespace std;

int main() {
  int num = 0, suma = 0;

  while (num >= 0) {
    suma += num;
    cout << "ingresar un numero entero positivo: ";
    cin >> num;
  }

  cout << "la suma de los numeros ingresados es: " << suma << endl;

  return 0;
}
