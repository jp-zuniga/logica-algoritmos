#include <string>

#define MAX 5

using namespace std;

typedef struct PERSONAS {
  string nombre;
  string direccion;
  string ciudad;
  string numero;
  int edad;
} PERSONAS;

int posicion = 0;
PERSONAS registro[MAX];
