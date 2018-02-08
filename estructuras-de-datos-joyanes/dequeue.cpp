#include <iostream>

class DequeEmptyException {
    public:
        DequeEmptyException() {
            std::cout << "Cola vacia" << std::endl;
        }
};

// Each node in a doubly linked list
class Node {
    public:
        int data;
        Node* next;
        Node* prev;
};

class Deque {  
    private:
        Node* front;
        Node* back;
        int count;
    public:
        Deque();
        bool is_empty();
        int size();
        void push_front( int element );
        void push_back( int element );
        int pop_front();
        int pop_back();
        int Front();
        int Back();
};

Deque::Deque() {
    front = NULL;
    back = NULL;
    count = 0;
}

bool Deque::is_empty() {
    return count == 0 ? true : false;
}

int Deque::size() {
    return count;
}

void Deque::push_front( int element ) {
    // Crea un nuevo nodo
    Node* aux = new Node();
    aux -> data = element;
    aux -> next = NULL;
    aux -> prev = NULL;

    if ( is_empty() ) {
        // Agrega el primer elemento
        front = back = aux;
    } else {
        // Agrega al principio de la bicola y arregla los links
        aux -> next = front;
        front -> prev = aux;
        front = aux;
    }
    count++;
}

void Deque::push_back( int element ) {          
    // Crea un nuevo nodo
    Node* aux = new Node();
    aux -> data = element;
    aux -> next = NULL;
    aux -> prev = NULL;

    if ( is_empty() ) {
        // Agrega el primer elemento
        front = back = aux;
    } else {
        // Agrega al final de la bicola y arregla los enlaces
        back -> next = aux;
        aux -> prev = back;
        back = aux;
    }
    count++;
}

int Deque::pop_front() {
    if ( is_empty() ) {
        throw new DequeEmptyException();
    }

    //  Dato en el primer nodo
    int ret = front -> data;

    // Borra el nodo del frente y arregla los enlaces
    Node* aux = front;
    if ( front -> next != NULL ) {
        front = front -> next;
        front -> prev = NULL;
    } else {
        front = NULL;
    }
    count--;
    delete aux;
    return ret;
}

int Deque::pop_back() {
    if ( is_empty() ) {
        throw new DequeEmptyException();
    }

    //  Datos en el ultimo nodo
    int ret = back -> data;

    // Borra el nodo del frente y arregla los enlaces
    Node* aux = back;
    if ( back -> prev != NULL ) {
        back = back -> prev;
        back -> next = NULL;
    } else {
        back = NULL;
    }
    count--;
    delete aux;

    return ret;
}

int Deque::Front() {          
    if ( is_empty() )
        throw new DequeEmptyException();

    return front -> data;
}

int Deque::Back() {
    if ( is_empty() )
        throw new DequeEmptyException();

    return back -> data;
}

int main() {      
    Deque q;

    try {
        if ( q.is_empty() ) {
            std::cout << "La bicola esta vacia" << std::endl;
        }

        // Introduce elementos desde el final
        q.push_back(100);
        q.push_back(200);
        q.push_back(300);

        // Introduce elementos desde el frente
        q.push_front(4);
        q.push_front(5);
        q.push_front(25);

        if ( !q.is_empty() ) {
            std::cout << "La bicola NO esta vacia" << std::endl;
        }

        // Tamaño de la bicola
        std::cout << "Tamanno de la bicola = " << q.size() << std::endl;

        // Extrae elementos del final
        std::cout << q.pop_back() << std::endl;
        std::cout << q.pop_back() << std::endl;
        std::cout << q.pop_back() << std::endl;

        // Extrae elementos del frente
        std::cout << q.pop_front() << std::endl;
        std::cout << q.pop_front() << std::endl;
        std::cout << q.pop_front() << std::endl;
    } catch (...) {
        std::cout << "Ocurrio una excepcion." << std::endl;
    }
}

/*
FUENTE:
http://www.sourcetricks.com/2011/06/c-deque.html
*/