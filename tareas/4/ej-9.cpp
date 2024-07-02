/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>

#define FILAS 5
#define COLUMNAS 5

using namespace std;

int matriz1[FILAS][COLUMNAS];
int matriz2[FILAS][COLUMNAS];
int producto[FILAS][COLUMNAS];

int filas1, filas2, columnas1, columnas2;

void ingresar(int num_matriz) {
  int num;

  if (num_matriz == 1) {
    cout << "\ningresar cantidad de filas: ";
    cin >> filas1;
    cout << "ingresar cantidad de columnas: ";
    cin >> columnas1;
    cout << endl;

    for (int x = 0; x < filas1; x++) {
      for (int y = 0; y < columnas1; y++) {
        cout << "MATRIZ 1: ingresar numero en fila " << x + 1 << ", columna "
             << y + 1 << ": ";

        cin >> num;
        matriz1[x][y] = num;
      }
    }
  } else if (num_matriz == 2) {
    cout << "\ningresar cantidad de filas: ";
    cin >> filas2;
    cout << "ingresar cantidad de columnas: ";
    cin >> columnas2;
    cout << endl;

    for (int x = 0; x < filas2; x++) {
      for (int y = 0; y < columnas2; y++) {
        cout << "MATRIZ 2: ingresar numero en fila " << x + 1 << ", columna "
             << y + 1 << ": ";

        cin >> num;
        matriz2[x][y] = num;
      }
    }
  }
}

void multiplicar() {
  // checkear si las matrices son compatibles para multiplicacion
  if (columnas1 == filas2) {
    // carga las filas de matriz1
    for (int x = 0; x < filas1; x++) {
      // carga las columnas de matriz2
      for (int y = 0; y < columnas2; y++) {
        // inicializa las posiciones del producto para luego sumarle los valores
        producto[x][y] = 0;

        // iterar sobre la fila de matriz1 y la columna de matriz2
        for (int z = 0; z < columnas1; z++) {
          producto[x][y] += matriz1[x][z] * matriz2[z][y];
        }
      }
    }
  } else {
    cout << "\nlas matrices no son compatibles para multiplicacion..." << endl;
  }
}

// imprimir las dos matrices ingresadas y el producto
void mostrar() {
  cout << "\nmatriz 1:" << endl;
  for (int x = 0; x < filas1; x++) {
    cout << "[";
    for (int y = 0; y < columnas1; y++) {
      // si esta en el ultimo numero de la fila, imprimir el numero y cerrar
      // corchete (sin coma)
      if (y == columnas1 - 1) {
        cout << matriz1[x][y] << "]" << endl;
      }

      // si no es el ultimo numero, imprimir el numero, un coma y un espacio
      // para que el proximo numero este separado
      else {
        cout << matriz1[x][y] << ", ";
      }
    }
  }

  cout << "\nmatriz 2:" << endl;
  for (int x = 0; x < filas2; x++) {
    cout << "[";
    for (int y = 0; y < columnas2; y++) {
      if (y == columnas2 - 1) {
        cout << matriz2[x][y] << "]" << endl;
      } else {
        cout << matriz2[x][y] << ", ";
      }
    }
  }

  cout << "\nproducto de matrices ingresadas:" << endl;
  for (int x = 0; x < filas1; x++) {
    cout << "[";
    for (int y = 0; y < columnas2; y++) {
      if (y == filas1 - 1) {
        cout << producto[x][y] << "]" << endl;
      } else {
        cout << producto[x][y] << ", ";
      }
    }
  }
}

int main() {
  int opcion, num;

  cout << "\n1. ingresar datos de matriz" << endl;
  cout << "2. multiplicar matrices" << endl;
  cout << "3. salir" << endl;
  cout << "escoja: ";
  cin >> opcion;

  switch (opcion) {
  case 1:
    cout << "\na cual matriz quiere ingresar datos? ";
    cin >> num;
    ingresar(num);
    break;
  case 2:
    multiplicar();
    mostrar();
    break;
  case 3:
    cout << "\nsaliendo..." << endl;
    break;
  default:
    cout << "\nopcion invalida..." << endl;
    break;
  }

  if (opcion != 3) {
    main();
  }

  return 0;
}
