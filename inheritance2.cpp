/*
Types of Inheritance

In C++ programming, not only you can derive a class from the base class but you can also derive a class 
from the derived class. This form of inheritance is known as multilevel inheritance.

class A{

};

class B:public A{

};
class C:public B
{

};
*/


#include<bits/stdc++.h>
using namespace std;

//Mulitilevel inheritance: Simple example


class A{
    public:
    void display()
    {
        cout<<"Base Class Content";
    }
};

class B:public A{ };
class C:public B{ };

int main()
{
    C obj; // we created object of the class C which inherits methods and properties of B which apparently inherits A;
//The compiler first looks for the display() function in class C. Since the function doesn't exist there,
// it looks for the function in class B (as C is derived from B).
    obj.display();
    return 0;
}





