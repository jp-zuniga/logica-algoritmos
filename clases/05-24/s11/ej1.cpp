#include <iostream>

using namespace std;

int main() {
  int num;
  int *puntero;
  int punteroFalso;

  puntero = &num;

  num = 90;
  punteroFalso = num;

  cout << num << ": " << puntero << "\n\n";
  cout << num << ": " << &puntero << "\n\n";
  cout << num << ": " << &punteroFalso << "\n\n";

  *puntero = 50;

  cout << &num << ": " << &puntero << "\n\n";
  cout << num << ": " << *puntero << "\n\n";
  cout << num << ": " << punteroFalso << "\n";
}
