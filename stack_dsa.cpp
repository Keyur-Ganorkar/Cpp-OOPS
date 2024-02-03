#include<iostream>
using namespace std;
#define size 3
int top=-1;
int stk[size];
void push(int);
void pop();



int main()
{
cout<<"************************(( C++ ))************************\n"<<"\t\t\nWelcome to stack program "<<endl;
int i;
int k;
cout<<"What you want to perform in Stack \n1.Insertion \n2.Deletion \n3.Both \nEnter your choice :";
cin>>i;
switch(i)
{
    case 1:
    cout<<"Enter the element to be inserted:";
    cin>>k;
    push(k);
    break;
    case 2:
    pop();
    break;
    case 3:
               cout<<"Enter the element to be inserted:";
               cin>>k;
    push(k);
               cout<<"Enter the element to be inserted:";
               cin>>k;
    push(k);
    pop();
    break;

    default:
    cout<<"Operation in not possible\n thank you ";

}

return 0;
}
void push(int m)
{
    if(top==size)
    {
        cout<<"stack is overflow,no insertion further can be done ";
    }
    top++;
    stk[top]=m;

     
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack is underflow, deletion can not be possible ";
    }
    else
    {
    int z=stk[top];
    cout<<"Deleted element:"<<z;
    top--;
    }
    
}