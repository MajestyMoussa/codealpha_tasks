#include <iostream>
#include<string>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int u , int v)
{
 int t;
 while ( u > 0 )
 {
   if ( u < v )
   { t = u; u = v; v =t; }
   u = u - v;
 }
 return v ; 
}
int main()
{
    int u, v ;
    std :: cout << "Enter the first integer" << endl;
    std :: cin>> u ;
    std :: cout << "Enter the second integer" << endl;
    std :: cin>> v ;
     while ((u ,v) != EOF)
    {
    std :: cout<<"The GCD is " << gcd(u , v) << endl;
}
system("PAUSE");
return 0 ;
}
