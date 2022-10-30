/* 


If more than one class is inherited from the base class, it's known as hierarchical inheritance. In hierarchical inheritance, 
all features that are common in child classes are included in the base class.

For example, Physics, Chemistry, Biology are derived from Science class. Similarly, Dog, Cat, Horse are derived from Animal class.

Syntax:

class base_class{
    ....
};
class first_derived_class:public base_class{
    ......
};
class second_derived_class:public base_class{
    .......
};
class third_derived_class:public base_class{
    ........
};

*/




//Hierarchical Inheritance
#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void info()
    {
        cout<<"I am an animal"<<endl;
    }
};

class Dog:public Animal{
    public:
    void bark()
    {
        cout<<"I am a Dog"<<endl;
    }
};

class Cat:public Animal{
    public:
    void meow()
    {
        cout<<"I a Cat"<<endl;
    }
};






int main()
{
    //Dog obj
    Dog obj1;
    cout<<"Dog Class"<<endl;
    obj1.info();
    obj1.bark();

    cout<<endl;
    //cat obj
    Cat obj2;
    cout<<"cat Class"<<endl;
    obj2.info();
    obj2.meow();
    return 0;
}


//Here, both the Dog and Cat classes are derived from the 
//Animal class. As such, both the derived classes 
//can access the info() function belonging to the Animal class.