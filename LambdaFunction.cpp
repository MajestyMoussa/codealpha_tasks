#include <iostream>
#include<string>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x ;
    auto square = [](int x) { return x * x; };  // Lambda function
    cin >> x ;
    cout << square(x) << endl; 
    return 0;
}