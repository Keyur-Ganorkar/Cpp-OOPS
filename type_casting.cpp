#include<iostream>
#include<typeinfo>
using namespace std;

int operat(float a,float b)
{
    float f;
    f=a+b;
    return f;
}


int main()
{
    //implicit conversion
            int x;
            x=operat(7.5,8.12);
            cout<<x<<endl;
    //explicit conv 
    short x3;
    int y3;
    y3=x3;
    //this is used to convert (short---->(int)--->(float)---->(double)---->int)
       
return 0;
}