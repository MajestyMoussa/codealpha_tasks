#include <iostream>
#include<string>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N 1000

int main() {
    int i, j;
    bool a[N+1];
    
    // Initialize all entries to true (assume all numbers are prime initially)
    for (i = 0; i <= N; i++) {
        a[i] = true;
    }

    // Sieve of Eratosthenes
    a[0] = a[1] = false;  // 0 and 1 are not prime numbers
    for (i = 2; i * i <= N; i++) {
        if (a[i] == true) {
            for (j = i * i; j <= N; j += i) {
                a[j] = false;  // Mark multiples of i as not prime
            }
        }
    }

    // Print all prime numbers
    for (i = 2; i <= N; i++) {
        if (a[i]) {
            cout << i << endl;
        }
    }

    return 0;
}