# include <iostream>
# include <stdlib.h>

// Llenar una pila con números leídos por teclado. 
// A continuación, vaciar la pila de tal forma que se muestren
// solo los valores positivos.

# define MAX 5

class Stack {
    private:
        int e;
        int elements[MAX];
        int top;
    public:
        Stack();
        bool stack_full();
        bool stack_empty();
        void push( int e );
        int pop();
        void list_stack();
};

Stack::Stack() {
    top = -1;
}

bool Stack::stack_empty() {
    return ( top == -1 );
}

bool Stack::stack_full() {
    return ( top == MAX - 1);
}

void Stack::push( int e ) {
    if ( !stack_full() ) {
        top++;
        elements[top] = e;
    } else {
        std::cout << "Overflow. Ultimo valor: " << e << std::endl;
    }
}

int Stack::pop() {
    if ( !stack_empty() ) {
        e = elements[top];
        top--;

        return e;
    } else {
        std::cout << "Underflow. Es imposible eliminar.";
    }
}

void Stack::list_stack() {
    if ( !stack_empty() ) {
        for ( int i = 0; i <= top; i++ ) {
            std::cout << elements[i] << '\n';
        }
        std::cout << '\n';
    } else {
        std::cout << "\nImposible listar. La pila esta vacia.\n";
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
                {
                    int popped_value = S.pop();

                    if ( popped_value >= 0 ){
                        std::cout << "\nValor eliminado: " << popped_value << "\n";
                    }
                
                    break;
                }
            case 3:
                std::cout << "\nElementos en la pila:\n"; 
                S.list_stack();
                break;
            case 4:
                std::cout << "\nAdios.\n";
                return 0;
            default:
                std::cout << "\nOpcion invalida.\n";
                break;
        }

        system( "PAUSE" );
        system( "CLS" );
        
    } while ( option != 3 );
}

/*

Why brackets in lines 94 ~ 99?:
https://stackoverflow.com/questions/23599708/how-do-i-resolve-this-error-jump-to-case-label-crosses-initialization/23599822

*/