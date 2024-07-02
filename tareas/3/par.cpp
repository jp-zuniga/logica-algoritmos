#include <iostream>

using namespace std;

void esPar(int num) {
  if (num % 2 == 0) {
    cout << "el numero es par";
  }
}

int main() {
  int num;

  cout << "introduce un numero: ";
  cin >> num;

  esPar(num);
}
