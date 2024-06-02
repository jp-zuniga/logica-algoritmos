#include <cstring>
#include <iostream>

#include "variables.h"

using namespace std;

// CRUD: create, read, update, delete
void addReg(int cantidad = 1);
void showReg();
void updateReg();
void deleteReg();

void addReg(int cantidad) {
  int i = 0;

  do {
    cout << "\n\t\tStudent Info:\n";
    cout << "-------------------------------------------------" << endl;
    cout << "CIF: ";
    cin >> students[position].CIF;

    cout << "First and middle names: ";
    scanf(" %[^\n]", students[position].names);

    cout << "Last names: ";
    scanf(" %[^\n]", students[position].lastNames);

    cout << "Year: ";
    cin >> students[position].year;

    cout << "\nStudent registered...\n\n";
    position++, i++;
  } while (i < cantidad);

  cout << endl;
}

void showReg() {
  cout << "\n\t\tStudents:\n";

  for (int i = 0; i < position; i++) {
    cout << "-------------------------------------------------" << endl;
    cout << "CIF: " << students[i].CIF << endl;
    cout << "Name: " << students[i].names << " " << students[i].lastNames
         << endl;

    cout << "Year: " << students[i].year << endl;
  }

  cout << endl;
}

void updateReg() {
  bool found = false;

  int tmpCIF, pos_est, info;

  cout << "\nEnter student's CIF: ";
  cin >> tmpCIF;

  for (int i = 0; i < position; i++) {
    if (tmpCIF == students[i].CIF) {
      pos_est = i;
      found = true;
      break;
    }
  }

  if (found == false) {
    cout << "\nStudent not found...\n\n";
    return;
  }

  cout << "\nWhich information do you wish to update?\n";
  cout << "1. CIF\n2. Names\n3. Last Names\n4. Year\n\nEnter (1-4): ";
  cin >> info;

  switch (info) {
  case 1:
    cout << "\nEnter new CIF: ";
    cin >> students[pos_est].CIF;
    break;
  case 2:
    cout << "\nEnter updated names: ";
    scanf(" %[^\n]", students[pos_est].names);
    break;
  case 3:
    cout << "\nEnter updated last names: ";
    scanf(" %[^\n]", students[pos_est].lastNames);
    break;
  case 4:
    cout << "\nEnter updated year: ";
    cin >> students[pos_est].year;
    break;
  default:
    cout << "\nInvalid option...";
    break;
  }

  if (info >= 1 && info <= 4) {
    cout << "\nStudent information updated...\n\n";
  }
}

void deleteReg() {
  STUDENT tmpStudents[position];

  bool found = false;
  int tmpCIF, pos_est;

  cout << "\nEnter student's CIF: ";
  cin >> tmpCIF;

  for (int i = 0; i < position; i++) {
    if (tmpCIF == students[i].CIF) {
      pos_est = i;
      found = true;
      break;
    }
  }

  if (found == false) {
    cout << "\nStudent not found...\n\n";
    return;
  }

  for (int i = 0; i < position; i++) {
    tmpStudents[i].CIF = students[i].CIF;
    strcpy(tmpStudents[i].names, students[i].names);
    strcpy(tmpStudents[i].lastNames, students[i].lastNames);
    tmpStudents[i].year = students[i].year;
  }

  for (int i = 0; i < position; i++) {
    if (i == pos_est) {
      for (int j = i; j < position; j++) {
        students[j].CIF = tmpStudents[j + 1].CIF;
        strcpy(students[j].names, tmpStudents[j + 1].names);
        strcpy(students[j].lastNames, tmpStudents[j + 1].lastNames);
        students[j].year = tmpStudents[j + 1].year;
      }
      break;
    } else if (i == position - 1) {
      students[i].CIF = 0;
      strcpy(students[i].names, "\0");
      strcpy(students[i].lastNames, "\0");
      students[i].year = 0;
    } else {
      students[i].CIF = tmpStudents[i].CIF;
      strcpy(students[i].names, tmpStudents[i].names);
      strcpy(students[i].lastNames, tmpStudents[i].lastNames);
      students[i].year = tmpStudents[i].year;
    }
  }

  cout << "\nStudent deleted from registry...\n\n";
  position--;
}
