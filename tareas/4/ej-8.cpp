// Crea un programa que permita al usuario ingresar dos vectores de la
// misma longitud y luego calcule su producto punto. Muestra el resultado
// al finalizar el cálculo.

#include <iostream>

#define MAX 2

using namespace std;

int vector1[MAX];
int vector2[MAX];

void ingresar() {
  int num1, num2;

  for (int i = 0; i < MAX; i++) {
    cout << "\ningresar numero " << i + 1 << " a vector 1: ";
    cin >> num1;
    vector1[i] = num1;

    cout << "ingresar numero " << i + 1 << " a vector 2: ";
    cin >> num2;
    vector2[i] = num2;
  }
}

void producto() {
  int producto = 0;

  for (int i = 0; i < MAX; i++) {
    producto += vector1[i] * vector2[i];
  }

  cout << "\nel producto punto de los dos vectores es: " << producto << endl;
}

int main() {
  int opcion;

  cout << "\n1. ingresar numeros a vectores" << endl;
  cout << "2. calcular producto punto de vectores" << endl;
  cout << "3. salir" << endl;
  cout << "escoja: ";
  cin >> opcion;

  switch (opcion) {
  case 1:
    ingresar();
    break;
  case 2:
    producto();
    break;
  case 3:
    cout << "\nsaliendo..." << endl;
    break;
  default:
    cout << "\nopcion invalida..." << endl;
    break;
  }

  if (opcion != 3) {
    main();
  }

  return 0;
}
