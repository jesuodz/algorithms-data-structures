#include <stdio.h>
#include <iostream>

using namespace std;

typedef int Tipoelemento;
class Nodo {
	protected:
        Tipoelemento dato;
        Nodo *izdo;
        Nodo *dcho;
   public:
        Nodo( Tipoelemento valor ) {
            dato = valor;
            izdo = dcho = NULL;
        }
        Nodo( Nodo* ramaIzdo, Tipoelemento valor, Nodo* ramaDcho ) {
            dato = valor;
            izdo = ramaIzdo;
            dcho = ramaDcho;
        }

        Tipoelemento valorNodo() {
            return dato;
        }
        Nodo* subArbolIzdo() {
            return izdo;
        }
        Nodo* subArbolDcho() {
            return dcho;
        }

        void nuevoValor( Tipoelemento d ) {
            dato = d;
        }
        void ramaIzdo( Nodo* n ) {
            izdo = n;
        }
        void ramaDcho( Nodo* n ) {
            dcho = n;
        }

        void visitar() {
            cout << dato << " ";
        }

        int nodo_max( int a, int b ) {
            return (( a > b ) ? a : b );
        }
};
