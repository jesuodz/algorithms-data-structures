#include <iostream>

using namespace std;

template <class T>
class ColaGenerica {
    protected:
        class NodoCola {
            public:
                NodoCola* siguiente;
                T elemento;
                NodoCola (T x) {
                    elemento = x;
                    siguiente = NULL;
                }
        };
        NodoCola* frente;
        NodoCola* final;
    public:
        ColaGenerica() {
            frente = final = NULL;
        }
        void insertar(T elemento) {
            NodoCola* nuevo;
            nuevo = new NodoCola(elemento);
            if (this -> colaVacia()) {
                frente = nuevo;
            } else {
                final -> siguiente = nuevo;
            }
            final = nuevo;
        }
        T eliminar() {
            if (this -> colaVacia()) {
                cout << "Cola vac\241a, no se puede extraer." << endl;
            }
            T aux = frente -> elemento;
            NodoCola* a = frente;
            frente = frente -> siguiente;
            delete a;
            return aux;
        }
        void borrarCola() {
            for (; frente != NULL;) {
                NodoCola* a;
                a = frente;
                frente = frente -> siguiente;
                delete a;
            }
            final = NULL;
        }
        T frenteCola() {
            if ( this -> colaVacia()) {
                cout << "La cola esta vac\241a" << endl;
            }
            return frente -> elemento;
        }
        /*
        void mostrar() {
            NodoCola* n;
            n = cima;
            if (n == NULL) {
                cout << "Cola vac\241a";
            } else {
                while(n != NULL) {
                    cout << n -> elemento << " | ";
                    n = n -> siguiente;
                }
            }
        }
        */
        bool colaVacia() {
            return frente == NULL;
        }
        ~ColaGenerica() {
            borrarCola();
        }
};