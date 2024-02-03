#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter your Age:";
    cin>>i;
    if(i<18)
    {
        cout<<"You are not eligible for voting";
    }
    else
    {
      cout<<"You are Eligible for voting";
    }
}