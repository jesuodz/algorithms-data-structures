#include <iostream>
#include "../../arboles/ClaseArbolBinario.cpp"

using namespace std;

int main() {
    ArbolBinario arbol;
    Nodo *n1, *n2, *n3, *n4, *n5, *n6, *n7, *n8, *n9;

    // Lado izquierdo
    n1 = arbol.nuevoArbol(NULL, 3, NULL);
    n2 = arbol.nuevoArbol(NULL, 1, n1);
    n3 = arbol.nuevoArbol(n2,4,NULL);
    
    // Lado derecho
    n9 = arbol.nuevoArbol(NULL, 10, NULL);
    n8 = arbol.nuevoArbol(NULL, 8, NULL);
    n7 = arbol.nuevoArbol(n8, 9, n9);
    n6 = arbol.nuevoArbol(NULL, 6, NULL);
    n5 = arbol.nuevoArbol(n6, 7, n7);

    // Raiz
    n4 = arbol.nuevoArbol(n3, 5, n5);

    cout << "\nDescendiente: "; arbol.ordenDescABB(n4);
    cout<<endl;
    cout << "\nHojas en el arbol: "; 
    cout << arbol.contarHojas(n4);
    cout << endl;
    
    system("PAUSE");
}   