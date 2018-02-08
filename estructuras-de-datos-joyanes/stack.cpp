# include <iostream>

/*
Pila generica de tamaño 5, con funcion imprimir_pila()
*/

const int MAX = 5;

template < class T >
class Stack {
    private:
        T elements[MAX];
        int top;
    public:
        Stack();
        bool isFull();
        bool isEmpty();
        void push(T);
        void pop();
        T print_stack();
};

template < class T >
Stack< T >::Stack() {
    top = -1;
}

template < class T >
bool Stack< T >::isFull() {
    return ( MAX - 1 == top );
}

template < class T >
bool Stack< T >::isEmpty() {
    return ( top == -1 );
}

template < class T >
void Stack< T >::push( T Z ) {
    if( !isFull() ) {
        top++;
        elements[top] = Z;

        std::cout << "Elemento apilado: " << elements[top] << '\n';
    } else {
        std::cout << "Overflow. No se puede apilar mas elementos." << '\n';
    }
}

template < class T >
void Stack< T >::pop() {
    if( !isEmpty() ) {
        T elem_deleted = elements[top];
        top--;

        std::cout << "Elemento desapilado: " << elem_deleted << '\n';
    } else {
        std::cout << "Underflow. No se puede desapilar mas elementos." << '\n';
    }
}

template < class T >
T Stack< T >::print_stack() {

    if( !isEmpty() ) {
        
        std::cout << "PILA" << '\n';

        // Imprime la pila
        // Desde el ultimo elemento agregado al primero
        for( int i = top; i > -1; i-- ) {
            std::cout << "Elemento: " << elements[i] << '\n';
        }

    } else {
        std::cout << "No hay elementos en la pila." << '\n';
    }

}

int main() {
    Stack <int> enteros;
    
    enteros.push(1);
    enteros.pop();
    enteros.pop();
    enteros.push(2);
    enteros.push(-4);
    enteros.push(10);
    enteros.print_stack();
    std::cout << '\n';

    // POP 10
    enteros.pop();
    enteros.print_stack();
    std::cout << '\n';

    // POP -4
    enteros.pop();
    enteros.print_stack();
    std::cout << '\n';

    // POP 2
    enteros.pop();
    enteros.print_stack();
    std::cout << '\n';

    // UNDERFLOW
    enteros.pop();
    enteros.print_stack();
    std::cout << '\n';
}