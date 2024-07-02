#include <iostream>

using namespace std;

void calcularCosto(int opcion, int numEstudiantes) {
  bool proceder = true;
  int precioBus = 4500;

  int cobrar, total;

  switch (opcion) {
  case 1:
    if (numEstudiantes < 100) {
      cout << "ERROR: numero de estudiantes debe estar dentro del rango "
              "seleccionado\n\n";

      proceder = false;
    } else {
      cobrar = numEstudiantes * 60;
    }

    break;

  case 2:
    if ((numEstudiantes < 50) || (numEstudiantes > 99)) {
      cout << "ERROR: numero de estudiantes debe estar dentro del rango "
              "seleccionado\n\n";

      proceder = false;
    } else {
      cobrar = numEstudiantes * 70;
    }
    break;

  case 3:
    if ((numEstudiantes < 30) || (numEstudiantes > 49)) {
      cout << "ERROR: numero de estudiantes debe estar dentro del rango "
              "seleccionado\n\n";

      proceder = false;
    } else {
      cobrar = numEstudiantes * 100;
    }

    break;

  case 4:
    if (numEstudiantes > 30) {
      cout << "ERROR: numero de estudiantes debe estar dentro del rango "
              "seleccionado\n\n";
      proceder = false;
      break;
    } else {
      cobrar = numEstudiantes * 120;
    }

  case 5:
    break;
  default:
    cout << "opcion invalida...\n\n";
    break;
  }

  if (proceder == true) {
    total = cobrar + precioBus;
    cout << "costo de autobus: " << precioBus
         << "\npago de estudiantes: " << cobrar
         << "\ncosto total de viaje: " << total << "\n\n";
  }
}

int main() {
  int opcion, numEstudiantes;

  cout << "1. 100 o mas estudiantes\n";
  cout << "2. 50 a 99 estudiantes\n";
  cout << "3. 30 a 49 estudiantes\n";
  cout << "4. Menos de 30 estudiantes\n";
  cout << "5. Salir\n\n";
  cout << "Escoga el rango de estudiantes:\n";
  cin >> opcion;

  if ((opcion > 5) || (opcion < 1)) {
    cout << "opcion invalida\n\n";
    main();
  }

  cout << "\nDigite el numero exacto de estudiantes:\n";
  cin >> numEstudiantes;

  calcularCosto(opcion, numEstudiantes);

  if (opcion != 5) {
    main();
  }

  return 0;
}
