#include <iostream>
#include <conio.h>
#include "cola_generica.cpp"

using namespace std;

typedef int Dato;
int main() {
    ColaGenerica <int> objeto;
    Dato dato;
    int opcion;
    bool salir = false;
    do {
        do {
            system("cls");
            cout << "(1) Insertar en la cola" << endl;
            cout <<"(2) Eliminar de la cola" << endl;
            cout <<"(4) Mostrar la cola" << endl;
            cout << "(5) Salir"<< endl;
            cout <<"Ingrese su opcion aqui: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 5); 

        switch(opcion) {
            case 1:
                system("cls");
                cout << "Ingrese el dato: ";
                cin >> dato;
                objeto.insertar(dato);
                getch();
                break;
            case 2:
                system("cls");
                objeto.eliminar();
                getch();
                break;
            case 3:
                system("cls");
                // objeto.mostrar();
                getch();
                break;
            case 4:
                salir = true;
                cout << "Fin del programa";
                getch();
                break;
        }
    } while(salir == false);
}
