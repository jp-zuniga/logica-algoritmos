#include <iostream>

#include "funciones.cpp"

using namespace std;

int main() {
  int opcion;

  do {
    system("cls || clear");
    cout << endl << "1. Agregar notas" << endl;
    cout << "2. Mostrar nota(s) mas alta(s)" << endl;
    cout << "3. Mostrar promedio" << endl;
    cout << "4. Salir" << endl;
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
      mostrar_masAltas();
      system("pause");
      break;
    case 3:
      system("cls || clear");
      mostrar_avg();
      system("pause");
      break;
    case 4:
      cout << endl << "Saliendo..." << endl;
      break;
    default:
      cout << endl << "Opcion invalida..." << endl;
    }
  } while (opcion != 4);
}
