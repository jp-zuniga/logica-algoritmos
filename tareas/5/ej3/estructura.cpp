#include <string>

#define MAX 100

using namespace std;

typedef struct EMPLEADOS {
  string dni;
  string nombres;
  string apellidos;
  string genero;
  string cargo;
  int salario;
} EMPLEADOS;

int posicion = 0;
EMPLEADOS empleados[MAX];
