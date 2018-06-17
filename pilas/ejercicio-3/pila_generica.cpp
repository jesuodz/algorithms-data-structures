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
            if (pilaVacia()) {
                cout << "Pila vac\241a, no se puede extraer.";
            } else {
                T aux = cima -> elemento;
                cima = cima -> siguiente;
            }
        }
        bool pilaVacia() {
            return cima == NULL;
        }
        char cimaPila() {
            return cima -> elemento;
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
                    cout << n -> elemento << "-";
                    n = n -> siguiente;
                }
            }
        }
        ~PilaGenerica() {
            limpiarPila();
        }
};

// for (int i = str.length(); i > -1; i-- ) {
//                 NodoPila* nuevo;
//                 nuevo = new NodoPila(str[i]);
//                 nuevo -> siguiente = cima;
//                 cima = nuevo;
//             }