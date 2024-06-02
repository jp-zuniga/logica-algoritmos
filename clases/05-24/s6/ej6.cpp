#include <iostream>

using namespace std;

int main() {
  int i, num;

  cout << "ingresar un numero: ";
  cin >> num;

  while (i <= 12) {
    int resultado = i * num;
    cout << num << " * " << i << " = " << resultado << endl;
    i++;
  }
}
