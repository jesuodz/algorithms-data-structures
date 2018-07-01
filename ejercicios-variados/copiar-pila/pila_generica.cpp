#include <iostream>
#include <cstddef>

using namespace std;

template <class T>
class PilaGenerica {
    class NodoPila {
        public:
            NodoPila* siguiente;
            T elemento;
            NodoPila(T x) {
                elemento = x;
                siguiente = NULL;
            };
    };

    NodoPila* cima;
    public:
        PilaGenerica() {
            cima = NULL;
        }
        void insertar(T elemento) {
            NodoPila* nuevo;
            nuevo = new NodoPila(elemento);
            nuevo -> siguiente = cima;
            cima = nuevo;
        }
        T eliminar() {
            NodoPila* viejo;
            if (pilaVacia()) {
                cout << "Pila vac\241a, no se puede extraer.";
            } else {
                viejo = cima;
                cima = cima -> siguiente;
            }
            delete viejo;
        }
        T cimaPila() {
            if (pilaVacia()) {
                cout << "Pila vac\241a";
            } else {
                return (cima -> elemento);
            }
        }
        bool pilaVacia() {
            return cima == NULL;
        }
        void mostrar() {
            NodoPila* n;
            n = cima;
            if (n == NULL) {
                cout << "Pila vac\241a";
            } else {
                while(n != NULL) {
                    cout << n -> elemento << " | ";
                    n = n -> siguiente;
                }
            }
        }
        void limpiarPila() {
            while(!pilaVacia()) {
                eliminar();
            }
        }
        ~PilaGenerica() {
            limpiarPila();
        }
};
