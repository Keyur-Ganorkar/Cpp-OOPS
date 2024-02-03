#include<iostream>
using namespace std;

class Student
{
    public:
    int rollno;
    string name;

    Student(int x)
    {
        rollno=x;
        name="rahul";
    }
    Student(int x,string n)
    {
       rollno=x;
       name=n;
    }
    
};

int main()
{
Student s1(10);
Student s2(11,"Akash");
cout<<s1.rollno<<endl;
cout<<s1.name<<endl;
cout<<s2.rollno<<endl;
cout<<s2.name<<endl;
return 0;
}