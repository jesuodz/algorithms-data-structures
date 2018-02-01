# include <iostream>
# include <stdlib.h>

# define MAX 5

class Queue {
    private:
        int front;
        int back;
        int elements[MAX];
        int e;
    public:
        Queue();
        bool is_full();
        bool is_empty();
        void push( int e );
        int pop();
        void list_queue();
};

Queue::Queue() {
    front = -1;
    back = -1;
}

bool Queue::is_full() {
    return ( back == MAX - 1 );
}

bool Queue::is_empty() {
    return ( back == -1 );
}

void Queue::push( int e ) {
    if ( !is_full() ) {
        front++;
        back++;

        elements[front] = e;
    } else {
        std::cout << "Overflow. No se puede encolar el elemento " << e << '\n';
    }
}

int Queue::pop() {
    if ( !is_empty() ) {
        e = elements[front];
        front--;

        return e;
    } else {
        std::cout << "Underflow. La cola ya esta vacia.\n";
    }
}

void Queue::list_queue() {
    if ( !is_empty() ) {
        for ( int i = 0; i <= MAX; i++ ) {
            std::cout << elements[i] << '\n';
        }
    } else {
        std::cout << "No se puede listar porque la cola ya esta vacia" << '\n';
    }
}

int menu() {
    int opt;

    std::cout << "\n1. Ingresar valor"
              << "\n2. Eliminar valor de la cola"
              << "\n3. Listar la cola"
              << "\n4. Salir"
              << "\n>: ";
    std::cin >> opt;

    return opt;
}

int main() {
    Queue Q;
    int option, value;

    do {
        option = menu();

        switch( option ) {
            case 1:
                std::cout << ">: ";
                std::cin >> value;

                Q.push( value );
                break;
            case 2:
                std::cout << "Valor eliminado: " << Q.pop() << '\n';
                break;
            case 3:
                std::cout << "Elementos en la cola:\n";
                Q.list_queue();
                break;
            case 4:
                return 0;
            default:
                std::cout << "Opcion invalida\n";
                break;
        }

        system( "PAUSE" );
        system( "CLS" );

    } while ( option != 4 );
}