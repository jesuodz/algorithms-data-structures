#include "../../colas/cola_circular/ColaCircular.cpp"
#include <stdlib.h>
#include <time.h>
#include<iostream>
#include<conio.h>

using namespace std;

int random() {
    int num = rand() % 51 - 25;
    return num;
}

int main() {
    ColaCircular<int, 51> randoms;
    
    srand(time(NULL));
    int opcion;
    bool salir = false;
    do {
        do {
            system("cls");
            cout << "(1) Insertar en la cola" << endl;
            cout << "(2) Generar numeros primos" << endl;
            cout <<"(3) Mostrar la cola" << endl;
            cout << "(4) Salir"<< endl;
            cout <<"Ingrese su opcion aqui: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 5); 

        switch(opcion) {
            case 1:
                system("cls");
                
                for (int i = 0; i<50; i++) {
                    randoms.insertar(random());
                }

                cout << "\n\nNumeros aleatorios insertados en la cola" << endl;

                getch();
                break;
            case 2:
                system("cls");
                randoms.quitar();
                getch();
                break;
            case 3:
                system("cls");
                randoms.mostrar();
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
