#include <string>

#define MAX 100

using namespace std;

typedef struct STOCK {
  string codigo;
  string proveedor;
  int nivel_minimo = 5;
  int nivel_actual;
  float precio;
} STOCK;

int posicion = 0;
STOCK stock[MAX];
