//Polymorphism

/*
Polymorphism is an important concept of object-oriented programming. It simply means more than one form. That is, the same entity (function or operator) behaves differently in different scenarios.

*/
//Function Overloading

/*
 we can use two functions having the same name if they have different parameters (either types or number of arguments).

And, depending upon the number/type of arguments, different functions are called. For example,
*/


//This is compile time polymorphism

#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}
double sum(double a,double b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    cout<<"sum 1 = "<<sum(5,6)<<endl;
    cout<<"sum 2 = "<<sum(5.5,6.6)<<endl;
    cout<<"sum 3 = "<<sum(5,6,7)<<endl;

    return 0;
}

/*
Here, we have created 3 different sum() functions with different parameters (number/type of parameters). And, based on the arguments passed during a function call, a particular sum() is called.

It's a compile-time polymorphism because the compiler knows which function to execute before the program is compiled.
*/
