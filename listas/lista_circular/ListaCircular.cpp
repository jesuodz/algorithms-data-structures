#include <iostream>

using namespace std;

typedef int Dato;
class NodoCircular {
    private:
        Dato dato;
        NodoCircular* enlace;
    public:
        NodoCircular (Dato entrada) {
            dato = entrada;
            enlace = this;
        }
        NodoCircular* enlaceNodo() {
            return enlace;
        }
        NodoCircular* ponerEnlace(NodoCircular* sgte) {
            enlace = sgte;
        }
        Dato datoNodo() {
            return dato;
        }
};

class ListaCircular {
    private:
        NodoCircular* lc;
    public:
        ListaCircular() {
            lc = NULL;
        }

        NodoCircular* buscar(Dato entrada);

        void insertar(Dato entrada) {
            NodoCircular* nuevo;
            nuevo = new NodoCircular(entrada);
            if (lc != NULL) {
                nuevo -> ponerEnlace(lc -> enlaceNodo());
                lc -> ponerEnlace(nuevo);
            }
            lc = nuevo;
        }

        void eliminar(Dato entrada) {
            NodoCircular* actual;
            bool encontrado = false;

            actual = lc;
            while (( actual -> enlaceNodo() != lc) && (!encontrado)) {
                encontrado = (actual -> enlaceNodo() -> datoNodo() == entrada);
                if (!encontrado) {
                    actual = actual -> enlaceNodo();
                }
            }
            encontrado = (actual -> enlaceNodo() -> datoNodo() == entrada);
            
            // Enlace de nodo anterior con el siguiente
            if (encontrado) {
                NodoCircular* p;
                p = actual -> enlaceNodo(); // Nodo a eliminar
                if (lc == lc -> enlaceNodo()) { // Lista de un nodo
                    lc = NULL;
                } else {
                    if (p == lc) {
                        lc = actual;
                    }
                    actual -> ponerEnlace(p -> enlaceNodo());
                }
                delete p;
            }
        }

        void recorrer() {
            NodoCircular* p;
            if (lc != NULL) {
                p = lc -> enlaceNodo();
                do {
                    cout << "\t" << p -> datoNodo();
                    p = p -> enlaceNodo();
                } while (p != lc -> enlaceNodo());
            } else {
                cout << "\t Lista Circular vac\241a." << endl;
            }
        }

        void borrarLista(Dato entrada) {
            NodoCircular* p;
            if (lc != NULL) {
                p = lc;
                do {
                    NodoCircular* t;
                    t = p;
                    p = p -> enlaceNodo();
                    delete t;
                } while (p != lc);
            } else {
                cout << "\n\t Lista vac\241a." << endl;
            }
            lc = NULL;
        }
};