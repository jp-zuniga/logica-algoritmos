#include "estructura.cpp"
#include <iostream>
#include <string>
using namespace std;

// A. Impresión a pantalla de todos los registros.
// B. La nota más alta y número de identificación del alumno correspondiente.
//    Si existen varios alumnos con la misma nota más alta,
//    se deberán visualizar todos ellos.
// C. Nota promedio del curso

void agregar() {
  int x;

  cout << endl << "Cuantas notas desea ingresar? ";
  cin >> x;
  cout << endl;

  for (int i = 0; i < x; i++) {
    cout << "Estudiante " << i + 1 << ":" << endl;
    cout << "Carnet: ";
    cin >> ws;

    getline(cin, notas[i].carnet);
    cout << "Nombres: ";
    cin >> ws;

    getline(cin, notas[i].nombres);
    cout << "Apellidos: ";
    cin >> ws;

    getline(cin, notas[i].apellidos);
    cout << "Nota final: ";
    cin >> notas[i].nota_final;
    cout << endl;

    posicion++;
  }

  cout << "Nota(s) ingresadas..." << endl << endl;
}

void mostrar_masAltas() {
  int pos_altas = 0;

  mas_altas[0] = notas[0];

  for (int i = 1; i < posicion; i++) {
    if (notas[i].nota_final > mas_altas[0].nota_final) {
      mas_altas[0] = notas[i];
    } else if (notas[i].nota_final == mas_altas[pos_altas].nota_final) {
      mas_altas[pos_altas + 1] = notas[i];
      pos_altas++;
    }
  }

  cout << "Nota(s) mas alta(s):" << endl;
  for (int i = 0; i < pos_altas; i++) {
    cout << "Estudiante " << i + 1 << ":" << endl;
    cout << "Carnet: " << mas_altas[i].carnet << endl;
    cout << "Nombres: " << mas_altas[i].nombres << endl;
    cout << "Apellidos: " << mas_altas[i].apellidos << endl;
    cout << "Nota final: " << mas_altas[i].nota_final << endl << endl;
  }
}

void mostrar_avg() {
  for (int i = 0; i < posicion; i++) {
    promedio += notas[i].nota_final;
  }

  promedio /= posicion;
  cout << "Promedio de notas: " << promedio << endl << endl;
}
