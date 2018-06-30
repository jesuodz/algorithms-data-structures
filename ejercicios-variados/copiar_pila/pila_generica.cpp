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
            cout << "Elemento insertado.";
        }
        void eliminar() {
            if (!pilaVacia()) {
                NodoPila* viejo = cima;
                cima = cima -> siguiente;
                delete viejo;
                cout << "Elemento ha sido borrado" << endl;
            } else {
                cout << "La pila esta vac\241a";
            }
        }
        T cimaPila() {
            if (pilaVacia()) {
                cout << "Pila vac\241a";
            } else {
                cout << "Elemento: " << cima -> elemento << endl;
                return (cima -> elemento);
            }
        }
        bool pilaVacia() {
            return cima == NULL;
        }
        void limpiarPila() {
            NodoPila* n;
            while(!pilaVacia()) {
                n = cima;
                cima = cima -> siguiente;
                delete n;
            }
        }
        void mostrar() {
            NodoPila* n;
            n = cima;

            if (!pilaVacia()) {
                while(n != NULL) {
                    cout << n -> elemento << " | ";
                    n = n -> siguiente;
                }
            } else {
                cout << "Pila vac\241a";
            }
        }
        // ~PilaGenerica() {
        //     limpiarPila();
        // }
};
