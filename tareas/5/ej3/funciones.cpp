#include <iostream>
#include <string>

#include "estructura.cpp"

using namespace std;

void agregar() {
  int x;

  cout << endl << "Cuantas personas desea ingresar? ";
  cin >> x;
  cout << endl;

  for (int i = 0; i < x; i++) {
    cout << "Empleados " << i + 1 << ":" << endl;
    cout << "DNI: ";
    cin >> ws;
    getline(cin, empleados[i].dni);

    cout << "Nombres: ";
    cin >> ws;
    getline(cin, empleados[i].nombres);

    cout << "Apellidos: ";
    cin >> ws;
    getline(cin, empleados[i].apellidos);

    cout << "Genero: ";
    cin >> ws;
    getline(cin, empleados[i].genero);

    cout << "Cargo: ";
    cin >> ws;
    getline(cin, empleados[i].cargo);

    cout << "salario: ";
    cin >> empleados[i].salario;
    cout << endl;

    posicion++;
  }

  cout << "Empleado(s) ingresados..." << endl << endl;
}

void categorizar() {
  EMPLEADOS bajos[posicion];
  EMPLEADOS medios[posicion];
  EMPLEADOS altos[posicion];

  int pos_bajo = 0, pos_medio = 0, pos_alto = 0;

  for (int i = 0; i < posicion; i++) {
    if (empleados[i].salario < 20000) {
      bajos[pos_bajo] = empleados[i];
      pos_bajo++;
    } else if (empleados[i].salario >= 20000 && empleados[i].salario <= 60000) {
      medios[pos_medio] = empleados[i];
      pos_medio++;
    } else {
      altos[pos_alto] = empleados[i];
      pos_alto++;
    }
  }

  cout << "Empleados con salario bajo:" << endl;
  for (int i = 0; i < pos_bajo; i++) {
    cout << "DNI: " << bajos[i].dni << endl;
    cout << "Nombres: " << bajos[i].nombres << endl;
    cout << "Apellidos: " << bajos[i].apellidos << endl;
    cout << "Genero: " << bajos[i].genero << endl;
    cout << "Cargo: " << bajos[i].cargo << endl;
    cout << "Salario: " << bajos[i].salario << endl << endl;
  }

  cout << "Empleados con salario medio:" << endl;
  for (int i = 0; i < pos_medio; i++) {
    cout << "DNI: " << medios[i].dni << endl;
    cout << "Nombres: " << medios[i].nombres << endl;
    cout << "Apellidos: " << medios[i].apellidos << endl;
    cout << "Genero: " << medios[i].genero << endl;
    cout << "Cargo: " << medios[i].cargo << endl;
    cout << "Salario: " << medios[i].salario << endl << endl;
  }

  cout << "Empleados con salario alto:" << endl;
  for (int i = 0; i < pos_alto; i++) {
    cout << "DNI: " << altos[i].dni << endl;
    cout << "Nombres: " << altos[i].nombres << endl;
    cout << "Apellidos: " << altos[i].apellidos << endl;
    cout << "Genero: " << altos[i].genero << endl;
    cout << "Cargo: " << altos[i].cargo << endl;
    cout << "Salario: " << altos[i].salario << endl << endl;
  }
}
