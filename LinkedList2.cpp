#include <iostream>
#include<string>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node

    // Constructor to initialize the node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Linked List class
class LinkedList {
private:
    Node* head;  // Pointer to the first node in the list

public:
    // Constructor to initialize the linked list
    LinkedList() {
        head = nullptr;
    }

    // Append function to add a node at the end
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            // If the list is empty, set the new node as the head
            head = newNode;
        } else {
            // Traverse to the last node and update its `next` pointer
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Display function to print the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " -> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Main function to demonstrate the linked list
int main() {
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);

    cout << "Linked List: ";
    list.display();  // Output: 10 -> 20 -> 30

    return 0;
}