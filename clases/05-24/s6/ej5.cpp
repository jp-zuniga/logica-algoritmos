#include <iostream>

using namespace std;

int main() {
  int num;

  cout << "ingrese un numero: ";
  cin >> num;

  int i = 2;
  bool prime = true;

  while (i < num) {
    if (num % i == 0) {
      prime = false;
      break;
    }

    i++;
  }

  if (num == 1) {
    cout << "1 no es primo";
  } else if (prime == true) {
    cout << num << " es primo" << endl;
  } else {
    cout << num << " no es primo" << endl;
  }
}
