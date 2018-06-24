#include <iostream>

using namespace std;

template <class TipoDeDato, int MAX> class ColaCircular {
    private:
        TipoDeDato listaCola[MAX];
        int frente, final;
    protected:
        int siguiente(int r) {
            return (r + 1) % MAX;
        }
    public:
        ColaCircular() {
            frente = 0;
            final = MAX - 1;
        }
        void insertar(TipoDeDato elemento) {
            if (!colaLlena()) {
                final = siguiente(final);
                listaCola[final] = elemento;
                cout << "Dato insertado";
            } else {
                cout << "Overflow.";
            }
        }
        void quitar() {
            if (!colaVacia()) {
                TipoDeDato tm = listaCola[frente];
                frente = siguiente(frente);
                cout << "Elemento " << tm << " eliminado.";
            } else {
                cout << "Cola vac\241a.";
            }
        }
        void borrarCola() {
            frente = 0;
            final = MAX - 1;
            cout << "Elementos de la cola borrados";
        }
        void frenteCola() {
            if (!colaVacia()) {
                cout << listaCola[frente];
            } else {
                cout << "Cola vac\124a.";
            }
        }
        bool colaVacia() {
            return frente == siguiente(final);
        }
        bool colaLlena() {
            return frente == siguiente(siguiente(final));
        }
};