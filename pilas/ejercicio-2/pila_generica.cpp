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
        void eliminar(T elemento) {
            if (pilaVacia()) {
                cout << "Pila vac\241a, no se puede extraer.";
            } else {
                T aux = cima -> elemento;
                cima = cima -> siguiente;
                cout << "Elemento eliminado";
                if (aux > -1) {
                    cout << ": " << aux;
                }
            }
        }
        void cimaPila() {
            if (pilaVacia()) {
                cout << "Pila vac\241a";
            } else {
                cout << cima -> elemento;
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
            if (n == NULL) {
                cout << "Pila vac\241a";
            } else {
                while(n != NULL) {
                    cout << n -> elemento << " | ";
                    n = n -> siguiente;
                }
            }
        }
        ~PilaGenerica() {
            limpiarPila();
        }
};
