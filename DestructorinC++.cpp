#include <iostream>
#include<string>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MyClass {
public:
    int* ptr;  // Pointer to dynamically allocate memory

    // Constructor: Allocate memory
    MyClass(int value) {
        ptr = new int(value);  // Allocate memory dynamically
        cout << "Constructor: Memory allocated for ptr with value " << *ptr << endl;
    }

    // Destructor: Free the allocated memory
    ~MyClass() {
        delete ptr;  // Free the dynamically allocated memory
        cout << "Destructor: Memory deallocated for ptr" << endl;
    }
};

int main() {
    MyClass obj1(10);  // Create an object of MyClass

    // Dynamically allocate an object
    MyClass* obj2 = new MyClass(20);
    delete obj2;  // Manually delete the dynamically allocated object

    return 0;
}