#include<string>
#include<iostream>
using namespace std;


int main()
{
string s("ONE TWO THREE FOUR FIVE");
cout<<"the string contains: \n";
for(int i=0;i<s.length();i++)
   cout<<s.at(i);
cout<<"\nString is shown again:\n";
for(int j=0;j<s.length();j++)
    cout<<s[j];

int x1=s.find("TWO");
cout<<x1;
cout<<"\n\nTwo is found at :"<<x1<<"\n";

int x2=s.find_first_of('T');
cout<<"\n T is found at :"<<x2<<"\n";

int x3=s.find_last_of('R');
cout<<"\n R is found at :"<<x3<<"\n";

cout<<"\t\nRetrieve and print Substring Two:"<<"\n";
cout<<s.substr(x1,8);
cout<<"\n";
cout<<s.substr(x2,2)<<"\n";
cout<<s.substr(x3,5);
return 0;
}