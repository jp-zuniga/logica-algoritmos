#include <iostream>

#include "funciones.cpp"

using namespace std;

int main() {
  showMessage();

  int num1, num2;

  cout << "ingresar el primer numero: ";
  cin >> num1;
  cout << "ingresar el segundo numero: ";
  cin >> num2;

  sumarNums(num1, num2);
}
