#include <iostream>
#include<string>
#include <cstdlib>
#include <iostream>
using namespace std;

int gcd (int a, int b);

int main() {
    int i,j;
    std :: cout << "Enter the first integer" << endl;
    std :: cin >> i;
    std :: cout << "Enter the second integer" << endl;
    std :: cin >> j;
    int k = gcd(i,j);
    std :: cout << "The GCD is " << k << endl; 
    system("PAUSE");
    return 0;
}
int gcd (int a, int b){
    if(b==0){
        cout << "GCF(" << a;
        cout << "," << b;
        cout << ") => " <<endl;
        return a;
    }
    else {
        cout << "GCF(" << a;
        cout << "," << b;
        cout << ") => " << endl;
        return gcd(b,a%b);
    }
}