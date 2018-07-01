#include <iostream>

using namespace std;

template <class T>
class ColaCircular {
    protected:
        class NodoCircular {
            public:
                T dato;
                NodoCircular* enlace;
                NodoCircular (T elem) {
                    dato = elem;
                    enlace = this;
                }
                NodoCircular* retornarSgte() {
                    return enlace;
                }
                NodoCircular* enlazar(NodoCircular* sgte) {
                    enlace = sgte;
                }
                T datoNodo() {
                    return dato;
                }
        };
        NodoCircular* frente;
        NodoCircular* final;
    public:
        ColaCircular() {
            frente = final = NULL;
        }
        bool colaVacia() {
            return frente == NULL;
        } 
        T retornarFrente() {
            if (!colaVacia()) {
                return frente -> dato;
            }
            cout << "Cola Vac\241a." << endl;
        }
        T retornarFinal() {
            if (!colaVacia()) {
                return final -> dato;
            }
            cout << "Cola Vac\241a." << endl;
        }
        void insertar(T dato) {
            NodoCircular* nuevo;
            nuevo = new NodoCircular(dato);
            if (colaVacia()) {
                frente = nuevo;
            } else {
                nuevo -> enlazar(frente -> retornarSgte());
            }
            final = nuevo;
        }
        void mostrar(T dato) {
            NodoCircular* n;
            n = frente;
            if (n == NULL) {
                cout << "Cola vac\241a";
            } else {
                while(n -> datoNodo() != dato) {
                    cout << n -> datoNodo() << " | ";
                    n = n -> retornarSgte();
                }
            }
        }
};