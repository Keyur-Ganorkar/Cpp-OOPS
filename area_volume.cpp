#include<iostream>
using namespace std;
#define pi 3.14159

class Area
{
    public:
    int length;
    int breadth;
    int radius;

    void rectangle(int , int);
    int area_rectangle();
    

    void square(int);
    int area_square();
    

    void circle(int);
    int area_circle();
    

};

class Volume
{
    public:
    int length;
    int breadth;
    int radius;
    int width;

    void rectangle(int , int, int);
    int volume_rectangle();

    void square(int);
    int volume_square();

    void circle(int);
    int volume_circle();

};

void Area::rectangle(int a, int b)
{
    length =a;
    breadth =b;
}
int Area::area_rectangle()
{
    return length*breadth;
}
void Area::square(int d)
{
    d=length;
}
int Area::area_square()
{
    return length*length;
}

void Area::circle(int e)
{
    e=radius;
}
int  Area::area_circle()
{
    return pi*radius*radius;
}

//for next class of volume class

void Volume::rectangle(int a, int b,int c)
{
    length =a;
    breadth =b;
    width=c;
}
int Volume::volume_rectangle()
{
    return length*breadth*width;
}
void Volume::square(int d)
{
    d=length;
}
int Volume::volume_square()
{
    return length*length*length;
}

void Volume::circle(int e)
{
    e=radius;
}
int  Volume::volume_circle()
{
    return 0.75*pi*radius*radius*radius;
}

int main()
{
    int val1;
    cout<<"Enter 1 for rectangle, 2 for aquare, 3 for circle:";
    cin>>val1;
    cout<<endl;
    Area are;
    Volume vol;

    int length1,breadth1,width1,radius1;

    switch(val1)
    {
    case 1:
    int val2;
    cout<<"enter 1 for area, 2 for volume and 3 for both:";
    cin>>val2;
    if(val2==1)
    {
        cout<<"enter value of length:";
        cin>>length1;
        cout<<"enter value of breadth:";
        cin>>breadth1;
        are.rectangle(length1, breadth1);
        cout<<"area of rectangle:"<<are.area_rectangle();
    }

    else if (val2==2)
    {
        cout<<"enter value of length:";
        cin>>length1;
        cout<<"enter value of breadth:";
        cin>>breadth1;
        cout<<"enter value of width:";
        cin>>width1;
        vol.rectangle(length1, breadth1, width1);
        cout<<"volume of cuboid is:"<<vol.volume_rectangle();
    }

    else
    {
        cout<<"enter value of length:";
        cin>>length1;
        cout<<"enter value of breadth:";
        cin>>breadth1;
        cout<<"enter value of width:";
        cin>>width1;
        are.rectangle(length1, breadth1);
        vol.rectangle(length1, breadth1, width1);
        cout<<"area of rectangle:"<<are.area_rectangle()<<endl;
        cout<<"volume of cuboid is:"<<vol.volume_rectangle();
    }
    break;

    case 2:
    int val4;
    cout<<"enter 1 for area, 2 for volume and 3 for both:";
    cin>>val4;
    cout<<endl;

    if(val4==1)
    {
        cout<<"enter value of length";
        cin>>length1;
        are.square(length1);
        cout<<"area of square is:"<<are.area_square();
    }
    else if (val4==2)
    {
        cout<<"enter value of length";
        cin>>length1;
        vol.square(length1);
        cout<<"volume of cube is:"<<vol.volume_square();
    }

    else
    {
        cout<<"enter value of length";
        cin>>length1;
        are.square(length1);
        vol.square(length1);
        cout<<"area of square is:"<<are.area_square()<<endl;
        cout<<"volume of cube is:"<<vol.volume_square();
    }
    break;

    case 3:
    int val3;
    cout<<"enter 1 for area, 2 for volume and 3 for both:";
    cin>>val3;
    cout<<endl;

    if(val3==1)
    {
        cout<<"enter value of radius:";
        cin>>radius1;
        are.circle(radius1);
        cout<<"area of circle:"<<are.area_circle();
    }

    else if (val3==2)
    {
        cout<<"enter value of radius:";
        cin>>radius1;
        vol.circle(radius1);
        cout<<"volume of sphere:"<<vol.volume_circle();
    }

    else
    {
        cout<<"enter value of radius:";
        cin>>radius1;
        are.circle(radius1);
        vol.circle(radius1);
        cout<<"area of circle:"<<are.area_circle()<<endl;
        cout<<"volume of sphere is:"<<vol.volume_circle();
    }
    break;

    default:
    cout<<"INVALID!";
    break;
    }

    return 0;
}