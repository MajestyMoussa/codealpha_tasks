#include <iostream>
using namespace std;

int main() {
    char letter ;
    std :: cin >> letter ;
    cout << "The character is: " << letter << endl;  // Output: A
    
    // Using char as an integer (ASCII value)
    cout << "The ASCII value of '" << letter << "' is: " << int(letter) << endl;  // Output: 65

    return 0;
}