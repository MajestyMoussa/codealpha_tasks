#include <iostream>
using namespace std;

// Defining a struct
struct Person {
    string name;   // Member 1: string type
    int age;       // Member 2: integer type
    float height;  // Member 3: float type
};

int main() {
    // Creating an instance of Person
    Person p1;
    
    // Accessing and modifying struct members
    p1.name = "Alice";
    p1.age = 30;
    p1.height = 5.6;

    // Printing the values
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height << endl;

    return 0;
}
