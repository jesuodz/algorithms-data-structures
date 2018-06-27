#include <iostream>
#include "conio.h"
#include "BicolaGenerica.cpp"

using namespace std;
typedef int Dato;

int main() {
    BicolaGenerica <int> bicola;
    Dato dato;
    int opcion;
    bool salir = false;
    do {
        do {
            system("cls");
            cout << "(1) Insertar en la bicola por el frente" << endl;
            cout << "(2) Insertar en la bicola por el final" << endl;
            cout << "(3) Eliminar de la bicola por el frente" << endl;
            cout << "(4) Eliminar de la bicola por el final"<< endl;
            cout << "(5) Salir" << endl;
            cout <<"Ingrese su opcion aqui: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 6);

        switch(opcion) {
            case 1:
                system("cls");
                cout << "Ingrese el dato: ";
                cin >> dato;
                bicola.ponerFrente(dato);
                cout << "Elemento insertado." << endl;
                getch();
                break;
            case 2:
                system("cls");
                cout << "Ingrese el dato: ";
                cin >> dato;
                bicola.ponerFinal(dato);
                cout << "Elemento insertado." << endl;
                getch();
                break;
            case 3:
                system("cls");
                cout << "Elemento " << bicola.quitarFrente() << " eliminado." << endl;
                getch();
                break;
            case 4:
                system("cls");
                cout << "Elemento " << bicola.quitarFinal() << " eliminado." << endl;
                getch();
                break;
            case 5:
                salir = true;
                cout << "Fin del programa";
                getch();
                break;
        }
    } while(salir == false);
}