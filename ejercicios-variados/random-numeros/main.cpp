#include "ColaCircular.cpp"
#include "ColaGenerica.cpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <conio.h>
#include <cmath>

const int nums = 100;
using namespace std;

int numAleatorio() {
    int num = rand() % 51 - 25;
    return num;
}

bool chequearPrimo(int n) {
    if (n == 0) {
        return false; 
    }

    n = abs(n);
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
            break;
        }
    }
}

int main() {
    ColaCircular<int, nums> NRandoms;
    ColaGenerica <int> NPrimos;
    srand(time(NULL));
    int opcion, n;
    bool salir = false;

    do {
        do {
            system("cls");
            cout << "(1) Crear cola de numeros aleatorios" << endl;
            cout << "(2) Crear cola de numeros primos" << endl;
            cout <<"(3) Mostrar la cola" << endl;
            cout << "(4) Salir"<< endl;
            cout <<"Ingrese su opcion aqui: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 5); 

        switch(opcion) {
            case 1:
                system("cls");
                
                for (int i = 0; i < nums - 1; i++) {
                    NRandoms.insertar(numAleatorio());
                }

                cout << "\n\nNumeros aleatorios insertados en la cola" << endl;

                getch();
                break;
            case 2:
                system("cls");

                while(!NRandoms.colaVacia()) {
                    n = NRandoms.quitar();

                    if (chequearPrimo(n)) {
                        NPrimos.insertar(n);
                    }
                }

                cout << "Numeros copiados" << endl;

                getch();
                break;
            case 3:
                system("cls");

                cout << "Cola de randoms:\n";
                NRandoms.mostrar();
                
                cout << "\nCola de primos:\n";
                NPrimos.mostrar();
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
