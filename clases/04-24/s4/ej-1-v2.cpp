#include <iostream>

#define MAX 5

using namespace std;

int nums[MAX];
int pos = 0;

void agregarNum(int num) {
  if (pos < MAX) {
    nums[pos] = num;
    pos++;
  } else {
    cout << "\nno hay espacio para almacenar su numero\n";
  }
}

int sumar(int indice) {
  int suma = 0;

  for (int i = 0; i < indice; i++) {
    suma += nums[i];
  }

  return suma;
}

void menu() {
  int opcion, num, indice;

  cout << "\nelementos ingresados: " << pos << endl;
  cout << "1. ingresar numero\n";
  cout << "2. sumar numeros\n";
  cout << "3. salir\n";
  cout << "escoga: ";
  cin >> opcion;

  switch (opcion) {
  case 1:
    cout << "\ningrese un numero: ";
    cin >> num;

    agregarNum(num);

    if (pos < MAX) {
      cout << "numero agregado...\n";
    }

    break;
  case 2:
    cout << "\nhasta que indice quiere sumar? ";
    cin >> indice;
    cout << "la suma de los numeros hasta el indice " << indice
         << " es: " << sumar(indice) << "\n";

    break;
  case 3:
    cout << "\nsaliendo...\n";
    break;
  default:
    cout << "\nopcion invalida...\n";
    break;
  }

  if (opcion != 3) {
    menu();
  }
}

int main() {
  menu();

  return 0;
}
