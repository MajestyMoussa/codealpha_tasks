#include <iostream>
#include<string>
#include <cstdlib>
#include <iostream>
using namespace std;
int gcd_division(int a, int b)
{
    while (b != 0)
    {
        int reminder = a % b ;
      std::cout << a << " = " << a / b << " * " << b << " + " << reminder << std::endl;
        a = b ;
        b = reminder;
}
      return a;
}
int main() {
    int a,b,reminder;
    int gcd_division(int a, int b);
    std :: cout << "Enter the first integer" << endl;
    std :: cin>> a;
    std :: cout << "Enter the second integer" << endl;
    std :: cin>> b;
    std::cout << "The Euclidean algorithm using division:\n";
    std::cout << "The GCD of " << a << " and " << b << " is: " << gcd_division(a, b) << std::endl;
    return 0;
}
