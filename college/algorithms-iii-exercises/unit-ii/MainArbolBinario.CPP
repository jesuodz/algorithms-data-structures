#include "ClaseArbolBinario.cpp"
#include <conio.h>

int main() {
	ArbolBinario a;
    Nodo *n1,*n2,*n3,*n4;
    int user_num;

    n1 = a.nuevoArbol( NULL, 4, NULL );
    n2 = a.nuevoArbol( n1, 5, NULL );
    n3 = a.nuevoArbol( NULL, 1, NULL );
    n4 = a.nuevoArbol( n3, 3, n2 );

    n3 = a.nuevoArbol( NULL, 10, NULL );
    n2 = a.nuevoArbol( n3, 20, NULL );
    n1 = a.nuevoArbol( n4, 8, n2 );

    a.Praiz( n1 );
    cout << "Preorden:\n";
    a.preorden( n1 );

    cout << "\nInorden:\n";
    a.inorden( n1 );

    cout << "\nPostorden:\n";
    a.postorden( n1 );

    cout << "\nValor buscado: ";
    cin >> user_num;

    n4 = a.buscar( n1, user_num );
    if( n4 != NULL ) {
        cout << "Encontrado!";
    } else {
        cout << "Dato no encontrado";
    } 

    cout << "\nNumero de nodos en el arbol: " << a.contar_nodos( n1 ) << "\n";
    cout << "\nAltura del arbol: " << a.contar_nodos( n1 ) << "\n";
    getch();
}