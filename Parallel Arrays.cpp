/*
int key[max+2] , next[max+2];
int x , head , z ;
class list()
{
    head = 0 ; z = 1 ; x = 2 ;
    next[head] = z ; next [z] = z ;
 }
 deletenext(int t)
 {
    next[t] = next[next[t]]; 
 }
 int insertafter(int v , int t)
 {
    key[x] = v ; next[x] = next [t] ; 
    next[t] = x ; 
    return x++ ; 
 }
 int main ()
 {
    list ParallelArray ;
    
    return 0 ;
 }*/
#include <iostream>
#include<string>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int max_size = 100; // Maximum size for the arrays

// Define arrays and variables
int key[max_size + 2], next[max_size + 2];
int head = 0, z = 1, x = 2;

class ParallelArrayList {
private:
    int key[max_size + 2], next[max_size + 2]; // Parallel arrays for keys and next pointers
    int head, z, x;                            // Pointers and indices for the list

public:
    // Constructor
    ParallelArrayList() {
        head = 0; // Index for head node
        z = 1;    // Index for the end marker
        x = 2;    // Starting index for the first real node

        next[head] = z; // Head points to the end marker (empty list)
        next[z] = z;    // End marker points to itself
    }
    // Delete the node after node t
    void deleteNext(int t) {
        next[t] = next[next[t]];
    }

    // Insert a new node with value v after node t
    int insertAfter(int v, int t) {
        key[x] = v;
        next[x] = next[t];
        next[t] = x;
        return x++;
    }

    // Display the list
    void display() {
        int current = next[head];
        while (current != z) {
            cout << key[current] << " ";
            current = next[current];
        }
        cout << endl;
    }
};

int main() {
    ParallelArrayList list;

    // Insert values into the list
    int node1 = list.insertAfter(10, head); // Insert 10 after head
    int node2 = list.insertAfter(20, node1); // Insert 20 after node1
    int node3 = list.insertAfter(30, node2); // Insert 30 after node2

    cout << "List after inserting 10, 20, 30: ";
    list.display();

    // Delete the node after node1
    list.deleteNext(node1);
    cout << "List after deleting the node after 10: ";
    list.display();

    return 0;
}