#include <iostream>
#include <conio.h>
#include "pila_generica.cpp"

using namespace std;

template<typename P>
void copiarPila(P fuente) {

    while(!fuente.pilaVacia()) {
        fuente.cimaPila();
        fuente.eliminar();
    }

    // if (!fuente.pilaVacia()) {
    //     dest.insertar(fuente.cimaPila());
    //     fuente.eliminar();
    // }

    // while (!fuente.pilaVacia()) {
    //     dest.insertar(fuente.cimaPila());
    //     fuente.eliminar();
    // }
};

typedef int Dato;
int main() {
    PilaGenerica <int> P1, temp, copiaP1;
    Dato dato;
    int opcion;
    bool salir = false;
    do {
        do {
            system("cls");
            cout << "(1) Insertar en P1" << endl;
            cout <<"(2) Copiar elementos de P1 a P2" << endl;
            cout <<"(3) Mostrar las pilas" << endl;
            cout << "(4) Salir"<< endl;
            cout << "(5) Limpiar pila" << endl;
            cout <<"Ingrese su opcion aqui: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 5); 

        switch(opcion) {
            case 1:
                system("cls");
                cout << "Ingrese el dato: ";
                cin >> dato;
                P1.insertar(dato);
                getch();
                break;
            case 2:
                system("cls");
                copiarPila(P1);
                // // Orden: a, b, c -> c, b, a
                // copiarPila(P1, temp);
                // // Orden: c, b, a -> a, b, c
                // copiarPila(temp, copiaP1);

                getch();
                break;
            case 3:
                system("cls");
                cout << "Pila 1: "; if (P1.pilaVacia()) { cout << "vacia" << endl;} else {cout << "llena" << endl;}
                // cout << endl;
                // cout << "Pila 2: "; copiaP1.mostrar();
                getch();
                break;
            case 5:
                system("cls");
                P1.limpiarPila();
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
