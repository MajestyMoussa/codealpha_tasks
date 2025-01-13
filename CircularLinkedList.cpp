#include <iostream>
#include<string>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>

#include <iostream>
#include <cstdlib> // Required for malloc and free

using namespace std;

struct node {
    int key;
    struct node* next;
};

int main() {
    int i, N, M;
    struct node *t, *x;

    cout << "Enter the number of nodes (N) and step size (M): ";
    cin >> N >> M;

    // Allocate memory for the first node
    t = (struct node*)malloc(sizeof(struct node));
    t->key = 1;
    x = t;

    // Create the circular linked list
    for (i = 2; i <= N; i++) {
        t->next = (struct node*)malloc(sizeof(struct node));
        t = t->next;
        t->key = i;
    }

    t->next = x; // Complete the circular linked list

    // Eliminate nodes until one remains
    while (t != t->next) {
        for (i = 2; i < M; i++) {
            t = t->next; // Move to the (M-1)th node
        }

        cout << "Eliminated: " << t->next->key << endl;
        x = t->next;            // Node to be deleted
        t->next = t->next->next; // Skip the eliminated node
        free(x);                // Free the memory of the eliminated node
    }

    // Print the last remaining node
    cout << "Last remaining node: " << t->key << endl;
    free(t); // Free the last remaining node

    return 0;
}
