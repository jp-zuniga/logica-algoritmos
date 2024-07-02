#include <iostream>

using namespace std;

void checkearLados(float lado1, float lado2, float lado3) {
  if ((lado1 == lado2) && (lado2 == lado3) && (lado1 == lado3)) {
    cout << "es equilatero\n\n";
  } else if ((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)) {
    cout << "es isoceles\n\n";
  }
}

int main() {
  int opcion;
  float lado1, lado2, lado3;

  cout << "1. Describir triangulo\n";
  cout << "2. Salir\n";
  cout << "Escoga: ";
  cin >> opcion;

  switch (opcion) {
  case 1:
    cout << "\ningrese el primer lado: ";
    cin >> lado1;
    cout << "ingrese el segundo lado: ";
    cin >> lado2;
    cout << "ingrese el tercer lado: ";
    cin >> lado3;

    checkearLados(lado1, lado2, lado3);
    break;
  case 2:
    break;
  default:
    cout << "opcion invalida...\n\n";
    break;
  }

  if (opcion != 2) {
    main();
  }

  return 0;
}