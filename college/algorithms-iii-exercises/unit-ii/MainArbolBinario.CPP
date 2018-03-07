#include "ClaseArbolBinario.cpp"
#include <conio.h>

int main() {
	ArbolBinario a;
    Nodo *n1,*n2,*n3,*n4;

    n1 = a.nuevoArbol( NULL, "Maria", NULL );
    n2 = a.nuevoArbol( NULL, "Rodrigo", NULL );
    n3 = a.nuevoArbol( n1, "Luisa", n2 );

    n1 = a.nuevoArbol( NULL, "Anyora", NULL );
    n2 = a.nuevoArbol( NULL, "Abel", NULL );
    n4 = a.nuevoArbol( n1, "Jesus", n2 );
    n1 = a.nuevoArbol( n3, "Esperanza", n4 );

    a.Praiz( n1 );
    cout << "Preorden:\n";
    a.preorden( n1 );

    cout << "\nInorden:\n";
    a.inorden( n1 );

    cout << "\nPostorden:\n";
    a.postorden( n1 );
    getch();
}