// Para un grupo de clase de 8 estudiantes, realice un programa
// que permita calcular y dar como salida lo siguiente:
// - Cantidad de alumnos aprobados
// - Cantidad de alumnos reprobados
// - Promedio general del grupo

#include <iostream>

#define MAX 8

using namespace std;

int indice = 0;
int notas[MAX];

void agregarNotas(float nota) {
  if (indice < MAX) {
    notas[indice] = nota;
  } else {
    cout << "\ntodas las notas han sido guardadas" << endl;
  }

  indice++;
}

void aprobar() {
  int aprobados = 0;
  int reprobados = 0;

  for (int i = 0; i < MAX; i++) {
    if (notas[i] > 70) {
      aprobados++;
    } else {
      reprobados++;
    }
  }

  cout << endl;
  cout << aprobados << " estudiantes aprobaron la clase" << endl;
  cout << reprobados << " estudiantes reprobaron la clase" << endl;
}

void promedio() {
  float suma = 0;

  if (indice < MAX) {
    cout << "\nfaltan las notas de " << MAX - indice << " estudiantes" << endl;
  } else {
    for (int i = 0; i < MAX; i++) {
      suma += notas[i];
    }

    float promedio = suma / MAX;
    cout << "\nel promedio de la clase es: " << promedio << endl;
  }
}

int main() {
  int opcion;
  float nota;

  cout << "\n1. agregar notas de estudiantes" << endl;
  cout << "2. mostrar cuantos estudiantes aprobaron y reprobaron" << endl;
  cout << "3. calcular promedio de estudiantes" << endl;
  cout << "4. salir" << endl;
  cout << "escoja: ";
  cin >> opcion;

  switch (opcion) {
  case 1:
    cout << "\ncual es la nota del estudiante que quiere agregar? ";
    cin >> nota;
    agregarNotas(nota);
    break;
  case 2:
    aprobar();
    break;
  case 3:
    promedio();
    break;
  case 4:
    cout << "\nsaliendo..." << endl;
    break;
  default:
    cout << "\nopcion invalida..." << endl;
    break;
  }

  if (opcion != 4) {
    main();
  }

  return 0;
}
