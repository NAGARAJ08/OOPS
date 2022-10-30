//Operator Overloading



#include<bits/stdc++.h>
using namespace std;

class Count{
    private:
    int value;

    public:
    Count():value(5){}

    void operator ++(){
        value = value+2;
    }
    void display(){
        cout<<"Count: "<<value<<endl;
    }
    
};

int main(){

    Count count1;
    ++count1;

    count1.display();
    return 0;

}


/*

Here, we have overloaded the ++ operator, which operates on objects of Count class (object count1 in this case).

We have used this overloaded operator to directly increment the value variable of count1 object by 1.

This is also a compile-time polymorphism.
*/

