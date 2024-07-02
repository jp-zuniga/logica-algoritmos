#include <iostream>

using namespace std;

int main() {
  int numCalificaciones;

  cout << "Ingrese el numero de calificaciones: ";
  cin >> numCalificaciones;

  float calificaciones[numCalificaciones];
  float suma = 0;
  float promedio;
  int i = 0;

  while (i < numCalificaciones) {
    cout << "Ingrese las calificaciones: " << i + 1 << ": ";
    cin >> calificaciones[i];
    suma += calificaciones[i];
    i++;
  }

  promedio = suma / numCalificaciones;

  cout << "El promedio es: " << promedio << endl;

  return 0;
}
