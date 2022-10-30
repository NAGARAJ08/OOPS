#include<bits/stdc++.h>
using namespace std;
//INHERITENCE
class Car{   
    public:
    void price(){
        cout<<"Price of the car"<<endl;
    }
    void colour()
    {
        cout<<"color of the car"<<endl;
    }
};
class racecar:public Car{
    public:
    void navigator()
    {
        cout<<"Race car has navigator"<<endl;
    }
    void timer()
    {
        cout<<"It has timer"<<endl;
    }
};
int main(){   
    racecar F1;  //creating the object of the derived class 
    F1.price();
    F1.colour();    
    F1.timer();
    F1.navigator();
    return 0;
}
