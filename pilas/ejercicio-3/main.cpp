#include <iostream>
#include <conio.h>
#include <string>
#include "pila_generica.cpp"

using namespace std;

typedef string Palabra;
int main() {
    PilaGenerica <char> pila;
    Palabra palabra;
    int opcion;
    bool salir = false;
    string palabraReverso;
    do {
        do {
            system("cls");
            cout << "\241ES PALINDROMO?\n" << endl;
            cout << "(1) Insertar palabra en la pila" << endl;
            cout << "(2) Verificar palabra" << endl;
            cout << "(3) Mostrar la pila" << endl;
            cout << "(4) Salir"<< endl;
            cout <<"Ingrese su opcion aqui: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 5); 

        switch(opcion) {
            case 1:
                system("cls");
                cout << "Ingrese la palabra: ";
                cin >> palabra;

                for (int i = 0; i < palabra.length(); i++ ) {
                    pila.insertar(palabra.at(i));
                }

                getch();
                break;
            case 2:
                system("cls");

                while(!pila.pilaVacia()) {
                    palabraReverso.push_back(pila.cimaPila());
                    pila.eliminar();
                }

                if (palabraReverso == palabra) {
                    cout << "La palabra es palindromo" << endl;
                } else {
                    cout << "La palabra no es palindromo" << endl;
                }

                getch();
                break;
            case 3:
                system("cls");
                pila.mostrar();
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
