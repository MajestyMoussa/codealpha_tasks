#include <iostream>
#include<string>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node 
{ int key ; struct node *next ; };
struct node *head , *z , *t , 
class LinkedList3
{
struct node *head = (struct node *) malloc(sizeof *head);

struct node *z = (struct node *) malloc(sizeof *z); // MyClass* obj1 = (MyClass*) malloc(sizeof(MyClass));
// Allocate memory for head and z
//       head = new struct node;
//       z = new struct node;
// struct node *head = (struct node *) malloc(sizeof *head);
// struct node *z = (struct node *) malloc(sizeof *z);
head->next = z;
z->next = z;
};
void deletenext  (struct node *t)
{
 t->next = t->next->next;
};

struct node *insertafter(int v , struct node *t)
{
    struct node *x;
    struct node *x = (struct node *) malloc(sizeof *x);
    x->key = v ; x->next = t->next;
    t->next= x;
    return x;
};
    int main ()
    { 
    LinkedList3 List1A22;
        return 0 ;
    }
