#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string.h>

#include "variables.h"

using namespace std;

// menus
int menu();
void principal();

// procesos
void addCity(CITY *city);
void updateCity(CITY *city, int id);
void destroyCity(int id);

// funciones de soporte
CITY findCity(int id);
int findPos(int id);

// funciones principales
void pedirDato();
void mostrarTodo();
void mostrarCiudad();
void editar();
void eliminar();

// funciones de archivos:
int loadCities();
void writeFile(const CITY &city);

//************************************************************************************************

int menu() {
  int op;

  cout << "\n\t\tMenú\n";
  cout << "----------------------------------------\n";
  cout << "1. Agregar\n";
  cout << "2. Mostrar todas ciudades\n";
  cout << "3. Buscar ciudad\n";
  cout << "4. Editar\n";
  cout << "5. Eliminar\n";
  cout << "6. Salir\n\n";
  cout << "Opción: ";
  cin >> op;

  return op;
}

void principal() {
  int op;

  pos = loadCities();

  do {
    system("cls || clear");
    op = menu();

    switch (op) {
    case 1:
      system("cls || clear");
      pedirDato();
      system("pause");
      break;
    case 2:
      system("cls || clear");
      mostrarTodo();
      system("pause");
      break;
    case 3:
      system("cls || clear");
      mostrarCiudad();
      system("pause");
      break;
    case 4:
      system("cls || clear");
      editar();
      system("pause");
      break;
    case 5:
      system("cls || clear");
      eliminar();
      system("pause");
      break;
    case 6:
      cout << "\nCerrando programa...\n\n";
      break;
    default:
      cout << "\nDeberías de leer más. Solo hay 6 opciones.\n\n";
      break;
    }
  } while (op != 6);
}

//************************************************************************************************

void addCity(CITY *city) {
  cities[pos] = *city;
  pos++;
}

void updateCity(CITY *city, int id) {
  int position = findPos(id);

  strcpy(cities[position].name, city->name);
  strcpy(cities[position].description, city->description);
}

void destroyCity(int id) {
  int position = findPos(id);

  for (int i = position; i < pos - 1; i++) {
    cities[i] = cities[i + 1];
  }

  CITY c;
  cities[pos - 1] = c;
  pos--;
}

//************************************************************************************************

CITY findCity(int id) {
  CITY city;
  city.id = 0;
  city.name[0] = '\0';
  city.description[0] = '\0';

  for (int i = 0; i < pos; i++) {
    if (cities[i].id == id) {
      return cities[i];
    }
  }

  return city;
}

int findPos(int id) {
  for (int i = 0; i < pos; i++) {
    if (cities[i].id == id)
      return i;
  }

  return -1;
}

//************************************************************************************************

void pedirDato() {
  CITY city;

  cout << "\n\t\tDatos de Ciudad\n";
  cout << "-----------------------------------------------";
  cout << "\nID: ";
  cin >> city.id;

  cout << "Nombre: ";
  scanf(" %[^\n]", city.name);

  cout << "Descripción: ";
  scanf(" %[^\n]", city.description);

  addCity(&city);
  writeFile(city);
}

void mostrarTodo() {
  cout << "\n\t\tCiudades Registradas:\n";
  cout << "-----------------------------------------------";

  for (int i = 0; i < pos; i++) {
    cout << "\nCiudad #" << i + 1 << ": \n";
    cout << "ID: " << cities[i].id << "\n";
    cout << "Nombre: " << cities[i].name << "\n";
    cout << "Descripción: " << cities[i].description << "\n";
  }
}

void mostrarCiudad() {
  int id = 0;

  cout << "\nID de ciudad a buscar: ";
  cin >> id;

  int x = findPos(id);
  CITY city = findCity(id);

  cout << "\n\t\tCiudad #" << x + 1 << ":\n";
  cout << "-----------------------------------------------\n";
  cout << "ID: " << city.id << "\n";
  cout << "Nombre: " << city.name << "\n";
  cout << "Descripción: " << city.description << "\n";
}

void editar() {
  int id = 0;

  cout << "\nID de ciudad a editar: ";
  cin >> id;

  CITY city = findCity(id);

  cout << "Nombre: ";
  scanf(" %[^\n]", city.name);

  cout << "Descripción: ";
  scanf(" %[^\n]", city.description);

  updateCity(&city, id);

  cout << "\nCiudad actualizada...\n\n";
}

void eliminar() {
  int id = 0;

  cout << "ID de ciudad a eliminar: ";
  cin >> id;

  destroyCity(id);

  cout << "\nCiudad eliminada de registro...\n\n";
}

int loadCities() {
  ifstream archivo("cities.txt");

  if (archivo.fail()) {
    cout << "No se pudo abrir el archivo\n";
    return 0;
  }

  int i = 0;
  while (archivo >> cities[i].id) {
    archivo.ignore();
    archivo.getline(cities[i].name, 30);
    archivo.getline(cities[i].description, 100);
    archivo.close();
    i++;
  }

  archivo.close();

  return i;
}

void writeFile(const CITY &city) {
  ofstream archivo("cities.txt", ios::app);

  if (archivo.fail()) {
    cout << "No se pudo abrir el archivo\n";
    exit(1);
  }

  archivo << city.id << "\n";
  archivo << city.name << "\n";
  archivo << city.description << "\n";
}
