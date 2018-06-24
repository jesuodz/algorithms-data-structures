#include <iostream>
#include "../cola_generica/ColaGenerica.cpp"

template <class T>
class BicolaGenerica : public ColaGenerica<T> {
    public:
        void nuevo_nodo() {
            NodoCola* nuevo;
        }
        void ponerFinal(T elemento) {
            insertar(elemento);
        }
        void ponerFrente(T elemento) {
            NodoCola* nuevo;

            nuevo = new NodoCola(elemento);
            if (bicolaVacia()) {
                final = nuevo;
            }
            nuevo -> siguiente = frente;
            frente = nuevo;
        }
        T quitarFrente() {
            return eliminar();
        }
        T quitarFinal() {
            T aux;
            if (!bicolaVacia()) {
                if (frente == final) {
                    aux = eliminar();
                } else {
                    NodoCola* a = frente;
                    while (a -> siguiente != final) {
                        a = a -> siguiente;
                    }
                    aux = final -> elemento;
                    final = a;
                    delete (a -> siguiente);
                }
            } else {
                cout << "La bicola esta vacia" << endl;
            }
            return aux;
        }
        T frenteBicola() {
            return frenteCola();
        }
        T finalBicola() {
            if (bicolaVacia()) {
                cout << "Error: bicola vacia" << endl;
            }
            return (final -> elemento);
        }
        bool bicolaVacia() {
            return colaVacia();
        }
        void borrarBicola() {
            borrarCola();
        }
        int numElemsBicola() {
            int n = 0; 
            NodoCola* a = frente;
            if (!bicolaVacia()) {
                n = 1;
                while (a != final) {
                    n++;
                    a = a -> siguiente;
                }
            }
            return n;
        }
};