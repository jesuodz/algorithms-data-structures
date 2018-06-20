#include <iostream>
#include <conio.h>
#include "ColaGenerica.cpp"

using namespace std;

typedef int Dato;
int main() {
    ColaGenerica <int> cola;
    Dato dato;
    int opcion;
    bool salir = false;
    do {
        do {
            system("cls");
            cout << "(1) Insertar en la cola" << endl;
            cout <<"(2) Eliminar de la cola" << endl;
            cout <<"(3) Mostrar la cola" << endl;
            cout << "(4) Salir"<< endl;
            cout <<"Ingrese su opcion aqui: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 5); 

        switch(opcion) {
            case 1:
                system("cls");
                cout << "Ingrese el dato: ";
                cin >> dato;
                cola.insertar(dato);
                cout << "Elemento insertado." << endl;
                getch();
                break;
            case 2:
                system("cls");
                cout << "Elemento " << cola.eliminar() << " eliminado." << endl;
                getch();
                break;
            case 3:
                system("cls");
                cola.mostrar();
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
