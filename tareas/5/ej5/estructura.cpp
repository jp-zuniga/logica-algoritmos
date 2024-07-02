#include <string>

#define MAX 100

using namespace std;

typedef struct NOTAS {
  string carnet;
  string nombres;
  string apellidos;
  float nota_final;
} NOTAS;

float promedio = 0;
int posicion = 0;

NOTAS mas_altas[MAX];
NOTAS notas[MAX];
