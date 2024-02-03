#include<iostream>
using namespace std;

class Point
{
int x,y;
public:
    Point(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    Point( const Point &p1) //copy constructor
    {
        x=p1.x;
        y=p1.y;
    }
    void display()
    {
        cout<<"x = "<<x<<"\n"<<"y= "<<y<<endl;
    }
};


int main()
{
Point p1(10,20);
Point p2=p1;
cout<<"normal  constructor "<<endl;
p1.display();
cout<<"copy constructor"<<endl;
p2.display();
return 0;
}