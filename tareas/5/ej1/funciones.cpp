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
    cout << "Persona " << i + 1 << ":" << endl;
    cout << "Nombre: ";
    cin >> ws;
    getline(cin, registro[i].nombre);
    cout << "Direccion: ";
    cin >> ws;
    getline(cin, registro[i].direccion);
    cout << "Ciudad: ";
    cin >> ws;
    getline(cin, registro[i].ciudad);

    while (true) {
      cout << "Numero: ";
      getline(cin, registro[i].numero);
      if ((registro[i].numero.length() > 8) ||
          (registro[i].numero.length() <= 0)) {
        cout << "\nERROR: Invalid input...\n\n";
        continue;
      } else {
        break;
      }
    }

    cout << "Edad: ";
    cin >> registro[i].edad;
    cout << endl;
    posicion++;
  }

  cout << "Persona(s) ingresadas..." << endl << endl;
}

void mostrar() {
  cout << endl << "Personas registradas:" << endl << endl;

  for (int i = 0; i < posicion; i++) {
    cout << "Nombre: " << registro[i].nombre << endl;
    cout << "Direccion: " << registro[i].direccion << endl;
    cout << "Ciudad: " << registro[i].ciudad << endl;
    cout << "Numero: " << registro[i].numero << endl;
    cout << "Edad: " << registro[i].edad << endl << endl;
  }
}
