/*
Hybrid (Virtual) Inheritance:

Hybrid Inheritance is implemented by combining more than one type of inheritance.

For example: Combining Hierarchical inheritance and Multiple Inheritance. 


*/




//Hybrid (Virtual) Inheritance:
#include<bits/stdc++.h>
using namespace std;
//base class
class vehicle{
    public:
    vehicle()
    {
        cout<<"THis is a vehicle"<<endl;
    }
};
class Fare{

    public:
    Fare()
    {
        cout<<"Fare of the Vehicle"<<endl;
    }
};
class car:public vehicle{
};
class Bus:public vehicle,public Fare{
};
int main(){
    cout<<"calling car object"<<endl;
    car obj2;
    cout<<endl;
    cout<<"calling Bus object"<<endl;
    Bus obj1;
    return 0;
}

   