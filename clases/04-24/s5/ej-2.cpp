// leer 5 numeros y mostrarlos

#include <iostream>

using namespace std;

#define MAX 5

int indice;
int numeros[MAX];

void agregar(int num) {
  if (indice >= MAX) {
    cout << "no se puede agregar mas numeros :/" << endl;
  } else {
    numeros[indice] = num;
  }

  indice++;
}

void mostrar() {
  if (indice == 0) {
    cout << "no hay elementos guardados..." << endl;
  } else {
    for (int i = 0; i < indice; i++) {
      cout << numeros[i] << endl;
    }
  }
}

int main() {
  int opcion, num, cantidad;

  cout << "\n1. Agregar numeros" << endl;
  cout << "2. Mostrar numeros" << endl;
  cout << "3. Salir" << endl;
  cout << "Escoga: ";
  cin >> opcion;

  switch (opcion) {
  case 1:
    cout << "\ncuantos numeros quiere ingresar? ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++) {
      cout << "\ningrese un numero: ";
      cin >> num;
      agregar(num);
    }

    if (indice < MAX) {
      cout << "\nnumero(s) ingresado(s)...\n\n";
    }
    break;
  case 2:
    cout << endl;
    mostrar();
  case 3:
    break;
  default:
    cout << "\nopcion invalida...\n\n";
    break;
  }

  if (opcion != 3) {
    main();
  }

  return 0;
}
