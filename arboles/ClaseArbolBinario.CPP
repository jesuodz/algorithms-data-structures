#include "ClaseNodoArbol.cpp"
#include <iostream>

using namespace std;

class ArbolBinario {
	protected:
   	    Nodo *raiz;
        int numHojas;
    public:
        ArbolBinario() { 
            raiz = NULL;
            numHojas = 0;
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

        Nodo* buscar( Nodo* raizSub, Tipoelemento  buscado ) {
            if( raizSub == NULL ) {
                return NULL;
            } else if( buscado == raizSub -> valorNodo()) {
                return raizSub;
            } else if( buscado < raizSub -> valorNodo()) {
                buscar( raizSub -> subArbolIzdo(), buscado );
            } else {
                buscar( raizSub -> subArbolDcho(), buscado );
            }
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
                inorden( r -> subArbolIzdo());
                r -> visitar();
                inorden( r -> subArbolDcho());
            }
        }

        void postorden( Nodo *r ) {
            if ( r != NULL ) {
                postorden( r -> subArbolIzdo());
                postorden( r -> subArbolDcho());
                r -> visitar();
            }
        }

        int contar_nodos( Nodo *r ) {
            // ADAPTADO DE: http://www.cplusplus.com/forum/general/101322/

            // int contador = 1;

            // if ( r -> subArbolIzdo() ) {
            //     contador += contar_nodos( r -> subArbolIzdo());
            // }
            // if ( r -> subArbolDcho()) {
            //     contador += contar_nodos( r -> subArbolDcho());
            // }

            // return contador;
            return ( r -> subArbolIzdo() ? contar_nodos( r -> subArbolIzdo() ) : 0 ) + 
                    ( r -> subArbolDcho() ? contar_nodos( r -> subArbolDcho() ) : 0 ) + 1;
        }

        int obtener_altura( Nodo *r) {
            // ADAPTADO DE: http://www.csegeek.com/csegeek/view/tutorials/algorithms/trees/tree_part3.php
            if ( r != NULL ) {
                int izq = obtener_altura( r -> subArbolIzdo());
                int der = obtener_altura( r -> subArbolDcho());

                return 1 + max( izq, der );
            }
        }

        void ordenDescABB( Nodo *r ) {
            if ( r != NULL ) {
                ordenDescABB( r -> subArbolDcho());
                r -> visitar();
                ordenDescABB( r -> subArbolIzdo());
            }
        }

        bool esHoja(Nodo *n) {
            return n -> subArbolDcho() == NULL && n -> subArbolIzdo() == NULL;
        }

        int contarHojas( Nodo *r ) {
            if ( r != NULL ) {
                contarHojas( r -> subArbolIzdo());
                contarHojas( r -> subArbolDcho());
                
                if ( esHoja(r)) {
                    numHojas += 1;
                }
            }
            return numHojas;
        }
};