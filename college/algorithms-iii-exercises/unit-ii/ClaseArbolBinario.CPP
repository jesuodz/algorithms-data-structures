#include "ClaseNodoArbol.cpp"

class ArbolBinario {
	protected:
   	    Nodo *raiz;
    public:
        ArbolBinario() { 
            raiz = NULL; 
        }

        ArbolBinario( Nodo *r ) { 
            raiz = r; 
        }

        void Praiz( Nodo *r ) { 
            raiz = r; 
        }
        
        Nodo* Oraiz() { 
            return raiz; 
        }

        Nodo raizArbol() {
            if ( raiz ) {
                return *raiz;
            } else {
                throw "Arbol vacio";
            }
        }

        bool esVacio() { 
            return raiz == NULL; 
        }
        
        Nodo* hijoIzdo() {
            if ( raiz ) {
                return raiz -> subArbolIzdo();
            } else {
                throw "Arbol vacio";
            }
        }
        
        Nodo* hijoDcho() {
            if ( raiz ) {
                return raiz -> subArbolDcho();
            } else {
                throw "Arbol vacio";
            }
        }

        Nodo* nuevoArbol( Nodo* ramaIzda, Tipoelemento dato, Nodo* ramaDcha ) {
            return new Nodo( ramaIzda, dato, ramaDcha );
        }

        void preorden( Nodo *r ) {
            if ( r != NULL ) {
                r -> visitar();
                preorden( r -> subArbolIzdo());
                preorden( r -> subArbolDcho());
            }
        }

        void inorden( Nodo *r ) {
            if ( r != NULL ) {
                preorden( r -> subArbolIzdo());
                r -> visitar();
                preorden( r -> subArbolDcho());
            }
        }

        void postorden( Nodo *r ) {
            if ( r != NULL ) {
                preorden( r -> subArbolIzdo());
                preorden( r -> subArbolDcho());
                r -> visitar();
            }
        }
};