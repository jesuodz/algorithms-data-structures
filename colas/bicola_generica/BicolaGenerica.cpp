#include <iostream>
#include "../cola_generica/ColaGenerica.cpp"

template <class T>
class BicolaGenerica : public ColaGenerica<T> {
    public:
        void ponerFinal(T elemento) {
            this -> insertar(elemento);
        }
        void ponerFrente(T elemento) {
            typename BicolaGenerica<T>::NodoCola* nuevo;

            nuevo = new typename BicolaGenerica<T>::NodoCola(elemento);
            if (bicolaVacia()) {
                ColaGenerica<T>::final = nuevo;
            }
            nuevo -> siguiente = ColaGenerica<T>::frente;
            ColaGenerica<T>::frente = nuevo;
        }
        T quitarFrente() {
            return this -> eliminar();
        }
        T quitarFinal() {
            T aux;
            if (!bicolaVacia()) {
                if (ColaGenerica<T>::frente == ColaGenerica<T>::final) {
                    aux = this -> eliminar();
                } else {
                    typename ColaGenerica<T>::NodoCola* a = ColaGenerica<T>::frente;
                    while (a -> siguiente != ColaGenerica<T>::final) {
                        a = a -> siguiente;
                    }
                    aux = ColaGenerica<T>::final -> elemento;
                    ColaGenerica<T>::final = a;
                    delete (a -> siguiente);
                }
            } else {
                cout << "La bicola esta vacia" << endl;
            }
            return aux;
        }
        T frenteBicola() {
            return typename ColaGenerica<T>::frenteCola();
        }
        T finalBicola() {
            if (bicolaVacia()) {
                cout << "Error: bicola vacia" << endl;
            }
            return (ColaGenerica<T>::final -> elemento);
        }
        bool bicolaVacia() {
            return this -> colaVacia();
        }
        void borrarBicola() {
            typename ColaGenerica<T>::borrarCola();
        }
        int numElemsBicola() {
            int n = 0; 
            typename ColaGenerica<T>::NodoCola* a = ColaGenerica<T>::frente;
            if (!bicolaVacia()) {
                n = 1;
                while (a != ColaGenerica<T>::final) {
                    n++;
                    a = a -> siguiente;
                }
            }
            return n;
        }
};