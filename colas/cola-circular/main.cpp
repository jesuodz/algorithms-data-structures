#include <iostream>
#include <conio.h>
#include "ColaCircular.cpp"

using namespace std;

typedef int Dato;
int main() {
    ColaCircular<int> cola;
    if (cola.colaVacia()) {
        cout << "La cola esta vacia" << endl;
    } else {
        cout << "La cola no esta vacia" << endl;
    }
    cola.insertar(1);
    cola.insertar(2);
    cola.mostrar(2);
    cout << cola.retornarFrente() << endl;
    system("PAUSE");
    // Dato dato;
    // int opc;
    // bool out = false;
    // do {
    //     do {
    //         clrscr();
    //         cout << "(1) Insertar en la cola." << endl;
    //         cout << "(2) Eliminar de la cola." << endl;
    //         cout << "(3) Mostrar el frente de la cola." << endl;
    //         cout << "(4) Borrar cola." << endl;
    //         cout << "(5) out" << endl;
    //         cout << "Ingrese su opcion aqui: ";
    //         cin >> opc;
    //     } while (opc < 1 || opc > 5);

    //         switch(opc) {
    //             case 1:
    //                 clrscr();
    //                 cout << "Ingrese el dato: ";
    //                 cin >> dato;
    //                 cola.insertar(dato);
    //                 getch();
    //                 break;
    //             case 2:
    //                 clrscr();
    //                 cola.eliminar();
    //                 getch();
    //                 break;
    //             case 3:
    //                 clrscr();
    //                 cola.frenteCola();
    //                 getch();
    //                 break;
    //             case 4:
    //                 clrscr();
    //                 cola.borrarLista();
    //                 getch();
    //                 break;
    //             case 5:
    //                 out = true;
    //                 cout << "Fin del programa";
    //                 getch();
    //                 break;
    //         }
    // } while(out == false);
}