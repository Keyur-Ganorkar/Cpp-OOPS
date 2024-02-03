#include<iostream>
using namespace std;

int main()
{
    int array[10],i,n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"\nEnter the Element : "<<endl;
    for(i=0;i<n;i++){
        cout<<i+1<<" element:";
        cin>>array[i];
        cout<<endl;
    };
    cout<<"Array :";
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    };
    return 0;
}