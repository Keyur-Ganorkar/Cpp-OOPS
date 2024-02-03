#include<iostream>
using namespace std;

class Abc
{
    public:
    //constructor
    Abc()
    {
        cout<<"constructor called"<<endl;
    }
    ~Abc()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
   Abc obj1;
   int x=1;
   if(x)
   {
    Abc obj2;
}
return 0;
}