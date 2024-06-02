#include <iostream>

#include "procedimiento.cpp"

using namespace std;

int menu() {
  int opcion;

  system("cls || clear");

  cout << endl << "1. ingresar nota" << endl;
  cout << "2. mostrar notas" << endl;
  cout << "3. mostrar nota mas alta" << endl;
  cout << "4. mostrar nota mas baja" << endl;
  cout << "5. mostrar promedio" << endl;
  cout << "6. salir" << endl << endl;
  cout << "ingresar una opcion: ";
  cin >> opcion;

  return opcion;
}

void inicio() {
  int opcion;

  while (opcion != 6) {
    opcion = menu();

    switch (opcion) {
    case 1:
      agregarNota();
      system("pause");
      break;
    case 2:
      mostrarNotas();
      system("pause");
      break;
    case 3:
      notaAlta();
      system("pause");
      break;
    case 4:
      notaBaja();
      system("pause");
      break;
    case 5:
      promedio();
      system("pause");
      break;
    case 6:
      cout << endl << "saliendo..." << endl;
      system("pause");
      break;
    default:
      cout << endl << "opcion invalida..." << endl;
      system("pause");
      break;
    }
  }
}
