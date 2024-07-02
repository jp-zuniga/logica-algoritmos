#include <iostream>

#include "funciones.cpp"

using namespace std;

int main() {
  int opcion;

  do {
    system("cls || clear");

    cout << endl << "1. Agregar personas" << endl;
    cout << "2. Mostrar personas" << endl;
    cout << "3. Salir" << endl;
    cout << "Escoja: ";
    cin >> opcion;

    switch (opcion) {
    case 1:
      system("cls || clear");
      agregar();
      system("pause");
      break;
    case 2:
      system("cls || clear");
      mostrar();
      system("pause");
      break;
    case 3:
      cout << endl << "Saliendo..." << endl;
      break;
    default:
      cout << endl << "Opcion invalida..." << endl;
    }
  } while (opcion != 3);
}
