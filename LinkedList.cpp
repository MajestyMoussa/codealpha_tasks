#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* next;
};

class LinkedList {
public:
    Node* head;
    Node* z; 
    LinkedList() {
 // Initialize head and z
        head = new Node();  // Allocate memory for head
        z = new Node();     // Allocate memory for z
        head->next = z;     // Set head's next pointer to z
        z->next = z;        // Set z's next pointer to itself (circular)
    }

    // Function to delete the node after the given node
    void deleteNext(Node* t) {
        if (t->next != nullptr) {
            Node* temp = t->next;
            t->next = t->next->next;
            delete temp;  // Free the memory of the deleted node
        }
    }

    // Function to insert a new node after the given node
    Node* insertAfter(int v, Node* t) {
        Node* x = new Node();  // Create a new node
        x->key = v;            // Set the key of the new node
        x->next = t->next;     // Make new node's next point to t's next
        t->next = x;           // Make t's next point to new node
        return x;              // Return the new node
    }

    // Function to print the list (useful for testing)
    void printList() {
        Node* current = head->next;
        while (current != z) {
            cout << current->key << " ";
            current = current->next;
        }
        cout << endl;
    }
    
    // Destructor to clean up dynamically allocated memory
    ~LinkedList() {
        Node* current = head->next;  // Start from the first real node
        while (current != z) {       // Stop when we reach the dummy node (z)
            Node* next = current->next;
            delete current;          // Delete current node
            current = next;
        }
        // No need to delete 'head' or 'z' since they are meant to stay (circular list)
        delete z;  // Only delete 'z' because it's allocated dynamically
    }
};

int main() {
    LinkedList list;
    
    // Let's insert a few elements and print the list
    Node* t = list.insertAfter(10, list.head);  // Insert 10 after head
    list.insertAfter(20, t);                     // Insert 20 after node containing 10
    list.insertAfter(30, t);                     // Insert 30 after node containing 10
    
    cout << "List after insertions: ";
    list.printList();
    
    // Delete the node after t (which is the node with value 20)
    list.deleteNext(t);
    
    cout << "List after deletion: ";
    list.printList();
    
    return 0;
}