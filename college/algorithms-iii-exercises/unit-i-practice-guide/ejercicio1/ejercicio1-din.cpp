# include <iostream>
# include <stdlib.h>

// Escriba un programa que cree una pila dinámica de números enteros. 
// Se debe codificar funciones que realicen las
// operaciones de añadir a la pila, eliminar y mostrar sus elementos.
class Stack {
    struct Node {
        int data;
        Node* next;
        Node( int n );
    };

    Node* top;
    public:
        Stack();
        void delete_stack();
        bool is_empty();
        void push( int e );
        int pop();
        void list_stack();
};

// Constructor del nodo
Stack::Node::Node( int num ): data( num ), next( nullptr ) {}

// Constructor de la pila
Stack::Stack(): top( nullptr ) {}

bool Stack::is_empty() {
    return ( top == nullptr );
}

void Stack::push( int e ) {
    Node* new_node = new Node( e );
    new_node -> data = e;
    new_node -> next = nullptr;

    if ( is_empty() ) {
        top = new_node;
    } else {
        new_node -> next = top;
        top = new_node;
    }

    std::cout << "\nValor agregado exitosamente!\n";
}

int Stack::pop() {
    if ( !is_empty() ) {
        int value = top -> data;
        Node* old_node = top;
        top = top -> next;
        delete old_node;

        std::cout << "\nValor borrado: " << value << '\n';
    } else {
        std::cout << "Underflow. Es imposible eliminar.";
    }
}

void Stack::list_stack() {

    std::cout << "\nElementos en la pila:\n"; 

    if ( !is_empty() ) {
        for ( Node* i = top; i != nullptr; i = i -> next ) {
            std::cout << i -> data << " ";
        }
        std::cout << '\n';
    } else {
        std::cout << "\nImposible listar. La pila esta vacia.\n";
    }
}

void Stack::delete_stack() {
    Node* to_delete = top;
    Node* del_node;

    while ( to_delete != nullptr ) {
        del_node = to_delete;
        to_delete = to_delete -> next;
        delete del_node;
    }
}

int menu() {
    int opt;

    std::cout << "\n1. Ingresar valor"
              << "\n2. Eliminar valor de la pila"
              << "\n3. Listar la pila"
              << "\n4. Salir"
              << "\n>: ";
    std::cin >> opt;

    return opt;
}

int main() {
    Stack S;
    int option, value;

    do {
        option = menu();

        switch( option ) {
            case 1:
                std::cout << "\nValor para apilar: "; 
                std::cin >> value;
                S.push( value );
                break;
            case 2:
                std::cout << "\nValor eliminado: " << S.pop() << "\n";
                break;
            case 3:
                S.list_stack();
                break;
            case 4:
                std::cout << "\nAdios.\n";
                return 0;
            default:
                std::cout << "\nOpcion invalida.\n";
                break;
        }
        
    } while ( option != 3 );

    S.delete_stack();
}