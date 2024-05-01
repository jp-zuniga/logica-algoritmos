#include <iostream>

using namespace std;

bool checkearPar(int num) {
  bool check;

  if (num % 2 == 0) {
    check = true;
  } else {
    check = false;
  }

  return check;
}

void mostrar(int start, int end) {
  cout << "\n\nnumeros impares:\n";

  for (int i = start; i <= end; i++) {
    if (checkearPar(i) == false) {
      cout << i << endl;
    }
  }
}

int main() {
  int x, y;

  cout << "valor inicial: ";
  cin >> x;
  cout << "\nvalor final: ";
  cin >> y;

  mostrar(x, y);

  return 0;
}
