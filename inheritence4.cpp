/*
 Multiple Inheritance: 
 Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.


Syntax:

class A{
    .........
};

class B{
    ....
};

class C:public A,public B{
    .........
};

 */



//Multiple Inheritance: 
#include<bits/stdc++.h>
using namespace std;

class vehicle{

    public:
    vehicle()
    {
        cout<<"This is a vehicle"<<endl;
    }
};

class Fourwheeler{
    public:
    Fourwheeler()
    {
        cout<<"This is a 4 wheeler vehicle"<<endl;
    }
};

class car:public vehicle,public Fourwheeler{ 

};

int main()
{
    car obj;
    return 0;
}