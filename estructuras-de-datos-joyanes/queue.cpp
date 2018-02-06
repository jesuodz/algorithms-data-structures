# include <iostream>

/*
cola generica de tamaño 5, con funcion imprimir_cola()
*/

const int MAX = 5;

template < class T >
class queue {
    private:
        T elements[MAX];
        int front;
        int back;
    public:
        queue();
        bool isFull();
        bool isEmpty();
        void push(T);
        void pop();
        T print_queue();
};

template < class T >
queue< T >::queue() {
    front = 0;
    back = -1;
}

template < class T >
bool queue< T >::isFull() {
    return back == MAX - 1;
}

template < class T >
bool queue< T >::isEmpty() {
    return front > back;
}

template < class T >
void queue< T >::push( T E ) {
    if( !isFull() ) {
        back++;
        elements[back] = E;

        std::cout << "Elemento encolado: " << elements[back] << '\n';
    } else {
        std::cout << "Overflow. No se puede encolar mas elementos." << '\n';
    }
}

template < class T >
void queue< T >::pop() {
    if( !isEmpty() ) {
        T elem_deleted = elements[front];
        front++;

        std::cout << "Elemento desencolado: " << elem_deleted << '\n';
    } else {
        std::cout << "Underflow. No se puede desencolar mas elementos." << '\n';
    }
}

template < class T >
T queue< T >::print_queue() {

    if( !isEmpty() ) {
        
        std::cout << "COLA" << '\n';

        // Imprime la cola
        // Desde el primer elemento agregado al ultimo
        std::cout << "| ";
        for( int i = front; i <= back; i++ ) {
            std::cout << elements[i] << " | ";
        }

    } else {
        std::cout << "No hay elementos en la cola." << '\n';
    }

}

int main() {
    queue <int> enteros;

    enteros.push(1);
    enteros.pop();
    enteros.pop(); // UNDERFLOW
    enteros.push(2);
    enteros.push(-4);
    enteros.push(10);
    enteros.print_queue();
    std::cout << '\n';

    // POP 2
    enteros.pop();
    enteros.print_queue();
    std::cout << '\n';

    // POP -4
    enteros.pop();
    enteros.print_queue();
    std::cout << '\n';

    // POP 10
    enteros.pop();
    enteros.print_queue();
    std::cout << '\n';

    // UNDERFLOW
    enteros.pop();
    enteros.print_queue();
    std::cout << '\n';
}