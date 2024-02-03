#include<iostream>
#include<string>
using namespace std;

void display(string &str)
{
    cout<<""<<str.size()<<"\n";
    cout<<""<<str.length()<<"\n";
    cout<<""<<str.capacity()<<"\n";
    cout<<""<<str.max_size()<<"\n";
    cout<<""<<(str.empty()?"Yes":"No");
    cout<<"\n\n";

}
int main()
{
    string s;
    cout<<"initial status:\n";
    display(s);
    cout<<"Enter a one word string \n";
    cin>>s;
    cout<<"Status now:";
    display(s);
    s.resize(10);
    cout<<"Status after resizing :"<<endl;
    display(s);
    
return 0;
}