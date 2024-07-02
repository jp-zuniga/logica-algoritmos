// Dado un número natural n se desea calcular la suma de los números naturales
// desde 1 hasta n.

#include <iostream>

using namespace std;

void sumar(int n) {
  int suma = 0;

  if (n < 1) {
    cout << "\nERROR: el numero ingresado no es un numero natural" << endl;
  } else {
    for (int i = 1; i <= n; i++) {
      suma += i;
    }
  }

  cout << "\nla suma de los numeros naturales de 1 hasta " << n << " es "
       << suma << endl;
}

int main() {
  int num;

  cout << "hasta que numero quiere sumar? ";
  cin >> num;

  sumar(num);

  return 0;
}
