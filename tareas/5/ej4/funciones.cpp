#include <iostream>
#include <string>
#include "estructura.cpp"
using namespace std;

void agregar() {
    int x;
    cout << endl << "Cuantas articulos desea ingresar? ";
    cin >> x;

    cout << endl;
    for (int i = 0; i < x; i++) {
        cout << "Articulo " << i+1 << ":" << endl;

        string y;
        cout << "Desea definir un nivel minimo para el articulo? (s/n): ";
        cin >> y;
        if ((y == "s") || (y == "S") || (y == "si") || (y == "Si") || (y == "SI")) {
            cout << "Nivel minimo: ";
            cin >> ws;
            cin >> stock[posicion].nivel_minimo;
        }

        cout << "Codigo: ";
        cin >> ws;
        getline(cin, stock[i].codigo);
        cout << "Proveedor: ";
        cin >> ws;
        getline(cin, stock[i].proveedor);
        cout << "Nivel actual: ";
        cin >> stock[i].nivel_actual;
        cout << "Precio: ";
        cin >> stock[i].precio;
        cout << endl;
        posicion++;
    }

    cout << "Articulo(s) ingresados..." << endl << endl;
}

void revisar() {
    for (int i = 0; i < posicion; i++) {
        if (stock[i].nivel_actual <= stock[i].nivel_minimo) {
            cout << "ALERTA: hacer pedido de articulo " << stock[i].codigo << " al proveedor " << stock[i].proveedor << endl;
        }
    }

    cout << endl;
}