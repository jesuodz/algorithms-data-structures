#include <iostream>
#include <conio.h>
#include "pila_generica.cpp"

using namespace std;

template<typename P>
void copiarPila(P& fuente, P& aux, P& dest) {
    while(!fuente.pilaVacia()) {
        aux.insertar(fuente.cimaPila());
        fuente.eliminar();
    }
    while(!aux.pilaVacia()) {
        dest.insertar(aux.cimaPila());
        aux.eliminar();
    }
    cout << "Pila copiada" << endl;
}

typedef int Dato;
int main() {
    PilaGenerica <int> P1, temp, P2;
    Dato dato;
    int opcion;
    bool salir = false;
    do {
        do {
            system("cls");
            cout << "(1) Insertar en la pila original" << endl;
            cout <<"(2) Copiar pila" << endl;
            cout <<"(3) Mostrar las pilas" << endl;
            cout << "(4) Salir"<< endl;
            cout <<"Ingrese su opcion aqui: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 4); 

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
                copiarPila(P1, temp, P2);
                getch();
                break;
            case 3:
                system("cls");
                cout << "Pila original: \n\t"; P1.mostrar();
                cout << "\nPila copia: \n\t"; P2.mostrar();
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
