#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i=0;i<200;i++)
    {
        if(i%3==0)
        {
        continue;  //it will skip all the values which are divisible by 3 
        }
        if(i==109)
        {
            break; //it will terminate the loop when i=109 it get
        }
        cout<<i<<"\n";
    }
}    