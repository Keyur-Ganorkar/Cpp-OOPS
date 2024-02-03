#include <iostream>
using namespace std;

int main()
{   cout<<"******************Electricity*********************\n";
    string name;
    cout<<"Enter  name :";
    cin>>name;
    int unit;
    float charge;
    cout<<"Enter number of unit consumed :";
    cin>>unit;
    if(unit<=100)
    {
        charge=50+(0.6*unit);
        cout<<"Name:"<<name<<"\tcharge :"<<charge<<"Rs"<<endl;
    }
    else if (unit>100 && unit<=300)
    {
        charge=(50+(0.8*unit));
        cout<<"Name:"<<name<<"\t charge :"<<charge<<"Rs"<<endl;
    }
    else if (unit>300)
    {
        charge=(50+(0.9*unit));
        cout<<"Name:"<<name<<"\t charge :"<<charge<<"Rs"<<endl;
    }
    
   
    if(charge>300)
        charge=charge+((0.15*charge));
        cout<<" Total charge :"<<charge<<"Rs"<<endl;
    
    return 0;
}   