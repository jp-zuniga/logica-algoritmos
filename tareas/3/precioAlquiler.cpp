#include <iostream>

using namespace std;

void checkearPrecio(float km) {
  float precio;

  if (km <= 500) {
    precio = km * 30;
  } else if ((km > 500) && (km <= 1000)) {
    float exceso = km - 500;
    precio = km * 30 * (0.05 * exceso);
  } else if (km > 1000) {
    float exceso = km - 1000;
    precio = km * 30 * (0.08 * exceso);
  }

  // + iva
  float precio_con_impuesto = precio + (precio * 0.15);
  cout << "precio con impuestos: " << precio_con_impuesto << "\n";
  cout << "precio sin impuestos: " << precio << "\n";
}

int main() {
  int opcion;
  float km;

  cout << "1. Calcular precio de alquiler\n";
  cout << "2. Salir\n";
  cout << "Escoga: ";
  cin >> opcion;

  switch (opcion) {
  case 1:
    cout << "cuantos kilometros recorrio?\n";
    cin >> km;
    checkearPrecio(km);
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
