#include <iostream>
#include<string>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declare an integer variable
    int num = 42;

    // Declare a pointer variable and store the address of 'num'
    int* ptr = &num;

    // Print the value of 'num'
    std::cout << "Value of num: " << num << std::endl;

    // Print the address of 'num' using the pointer
    std::cout << "Address of num (using pointer): " << ptr << std::endl;

    // Access the value of 'num' using the pointer (dereferencing)
    std::cout << "Value of num (using dereferenced pointer): " << *ptr << std::endl;

    // Modify the value of 'num' through the pointer
    *ptr = 58;

    // Print the updated value of 'num'
    std::cout << "Updated value of num (through pointer): " << num << std::endl;

    // Print the address of the pointer itself
    std::cout << "Address of pointer variable: " << &ptr << std::endl;

    // Null pointer example
    int* nullPtr = nullptr;
    if (nullPtr == nullptr) {
        std::cout << "nullPtr is null." << std::endl;
    }

    return 0;
}
