#include <iostream>
#include <conio.h>
#include "ColaCircular.cpp"

typedef int Dato;
int main() {
    ColaCircular<int, 5> cola;
    Dato dato;
    int opc;
    bool out = false;
    do {
        do {
            clrscr();
            cout << "(1) Insertar en la cola." << endl;
            cout << "(2) Eliminar de la cola." << endl;
            cout << "(3) Mostrar el frente de la cola." << endl;
            cout << "(4) Borrar cola." << endl;
            cout << "(5) out" << endl;
            cout << "Ingrese su opcion aqui: ";
            cin >> opc;
        } while (opc < 1 || opc > 5);

            switch(opc) {
                case 1:
                    clrscr();
                    cout << "Ingrese el dato: ";
                    cin >> dato;
                    cola.insertar(dato);
                    getch();
                    break;
                case 2:
                    clrscr();
                    cola.quitar();
                    getch();
                    break;
                case 3:
                    clrscr();
                    cola.frenteCola();
                    getch();
                    break;
                case 4:
                    clrscr();
                    cola.borrarCola();
                    getch();
                    break;
                case 5:
                    out = true;
                    cout << "Fin del programa";
                    getch();
                    break;
            }
    } while(out == false);
}