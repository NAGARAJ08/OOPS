

//abstraction 1

#include<bits/stdc++.h>
using namespace std;

class abst
{
    private:
    int x,y,z;

    public:
        add()
        {
            cout<<"Enter the two nums: ";
            cin>>x>>y;
            z = x+y;
            cout<<"Sum is: "<<z<<endl;
        }

};

int main()
{
    abst b;
    b.add();
    return 0;

}





//abstraction 2


int main()
{
    int n,p;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the power ";
    cin>>p;

    int res = pow(n,p);

    cout<<"The power of number is: "<<res<<endl;

    return 0;
}