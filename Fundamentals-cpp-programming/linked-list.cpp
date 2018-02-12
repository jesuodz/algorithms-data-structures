# include <iostream>

template <typename T>
struct Node {
    T data; // The element of interest
    Node<T> *next; // Link to the succesor node in the list
    // Constructor
    Node( T data, Node *next ): data(data), next(next) {}
};

int main() {
    // Node objects
    Node<int> n4( 23, nullptr ),  // Make the last node;
        n3( 12, &n4 ),      // Make the fourth node, linked to n4
        n2( 25, &n3 ),      // Make the third node, linked to n3
        n1( 0, &n2 );      // Make the second node, linked to n2
    
    // Print the linked list
    for ( Node<int> *cursor = &n1; cursor != nullptr; cursor = cursor -> next ) {
        std::cout << cursor -> data << ' ';
    }
    std::cout << '\n';
}
