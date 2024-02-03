#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void display()
    {
        cout<<"\n Display base";
    }
    virtual void show()
    {
        cout<<"\n Show base";
    }
};
class Derived:public Base
{
    public:
    void display()
    {
        cout<<"\n Display Derived";
    }
    void show()
    {
        cout<<"\n Show Derived";
    }
};

int main()
{
    Base B;Derived D;
    Base *bptr;
    cout<<"bptr points to base";
    bptr=&B;
    bptr->display();
    bptr->show();
    cout<<"\nbptr points to derived";
    bptr=&D;
    bptr->display();
    bptr->show();
}