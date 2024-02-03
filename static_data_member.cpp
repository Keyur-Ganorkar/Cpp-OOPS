#include<iostream>
using namespace std;

class Test
{
    int rollno;
    static int count;
    public:
    void set_values()
    {
        cout<<"Enter thr Rollno:";
        cin>>rollno;
        count++;

    }
    void get_values()
    {
        cout<<"the rollno. of student : "<<rollno<<" and this is the count : "<<count<<"\n";
    }
};
int Test::count;
int main()
{
Test t1,t2,t3;
t1.set_values();
t1.get_values();
t2.set_values();
t2.get_values();
t3.set_values();
t3.get_values();
return 0;
}
