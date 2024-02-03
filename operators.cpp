#include<iostream>
using namespace std;

int main()
{
    int a=8;
    int b=5;
   //logical operator below
    cout<<"a & b :"<<(a&b)<<endl;
    cout<<"a OR b :"<<(a|b)<<endl;
    cout<<"a XOR b :"<<(a^b)<<endl;
    //bitwise operator below 
    cout<<"a>>b:"<<(a>>b)<<"\n";
    cout<<"a<<b:"<<(a<<b)<<"\n";
    //conditional 
    cout<<(5==6)<<"\n";
    cout<<(3!=1)<<"\n";
    cout<<(10<2)<<"\n";
    cout<<(6==6)<<"\n";
    //compound assignment
    b+=a;
    a-=1;
    cout<<"a="<<a<<"\n"<<"b="<<b;


}
