/*
In Object-Oriented Programming, 
Encapsulation is defined as binding together the data and the functions that manipulate them.

Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, sales section etc. 
The finance section handles all the financial transactions and keeps records of all the data related to finance. Similarly, 
the sales section handles all the sales-related activities and keeps records of all the sales. 
Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month. 
In this case, he is not allowed to directly access the data of the sales section. 
He will first have to contact some other officer in the sales section and then request him to give the particular data.

*/

// c++ program to explain
// Encapsulation

#include<bits/stdc++.h>
using namespace std;
class Encapsulation
{
    private:
    int x;

    public:
    void set(int a)
    {
        x = a;
    }

    int get()
    {
        return x;
    }
};
int main()
{
    Encapsulation obj;
    obj.set(6);
    cout<<obj.get();
    return 0;
}