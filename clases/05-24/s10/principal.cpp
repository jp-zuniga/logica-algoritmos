#include <iostream>

#include "funciones.cpp"

using namespace std;

int main() {
  int cantidad, option = 0;

  do {
    system("cls || clear");
    cout << "\n\t\tStudent Registry System\n";
    cout << "-------------------------------------------------" << endl;
    cout << "\n1. Add student\n";
    cout << "2. Show students\n";
    cout << "3. Update student information" << endl;
    cout << "4. Delete student from registry" << endl;
    cout << "5. Exit\n";
    cout << "Choose an option: ";
    cin >> option;

    switch (option) {
    case 1:
      cout << "\nHow many students do you wish to register? ";
      cin >> cantidad;
      addReg(cantidad);
      system("pause");
      break;
    case 2:
      showReg();
      system("pause");
      break;
    case 3:
      updateReg();
      system("pause");
      break;
    case 4:
      deleteReg();
      system("pause");
      break;
    case 5:
      cout << "\nClosing...\n";
      break;
    default:
      cout << "\nInvalid option...\n";
      break;
    }
  } while (option != 5);
}
