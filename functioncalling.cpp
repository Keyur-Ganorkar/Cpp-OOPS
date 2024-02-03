#include<iostream>
using namespace std;

int divide(int p,int q)
{
int r;
r=p/q;
return r;
}
void duplicate(int &a,int &b,int &c)
{
  a*=2;
  b*=2;
  c*=2;
}
//making constt variable will not change value of integer (as per me)
int prev_next(const int x2)
{
  cout<<"previous of "<<x2<<" is :"<<x2-1<<endl;
  cout<<"next of "<<x2<<"is :"<<x2+1<<endl;
  
}

int main()
{//calling by values
  int x1=10,y1=2,z1,s;
  z1=divide(x1,y1);
  cout<<z1<<endl;//5
  cout<<divide(10,5)<<endl; //2
  s=4+divide(x1,y1); //9
  cout<<s<<endl;

  //calling by refrences
  int x=10,y=50,z=3;
  duplicate(x,y,z);
  cout<<"x="<<x<<"\ny="<<y<<"\nz="<<z<<endl;

  //finding prev and next 
  int i=100;
  prev_next(i);
} 