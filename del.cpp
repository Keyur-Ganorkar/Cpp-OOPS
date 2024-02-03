#include<iostream>
using namespace std;

int main()
{
    int array[10],i,n,ad;
    cout<<"\n Enter the sie of array : ";
    cin>>n;
    cout<<"\n Enter the Element : "<<endl;
    for(i=0;i<n;i++){
        cout<<i+1<<" Element:";
        cin>>array[i];
        cout<<endl;
    };
    //insertion at first //
    n=n+1;
    cout<<"\n Enter the no to be added(at first index) :";
    cin>>ad;
    for(i=n;i>1;i--){
       array[i-1]=array[i-2];
    };
    array[0]=ad;
    cout<<"Array: ";
    for(i=0;i<n;i++){
         cout<<"\t"<<array[i];  
    };
    //insertion at last
    n++;
    cout<<"\n Enter the no to be added(at last index) :";
    cin>>ad;
    array[n-1]=ad;
    cout<<"Array: ";
    for(i=0;i<n;i++){
        cout<<"\t"<<array[i];  
    };
    



    return 0;
}