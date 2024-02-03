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
    int length1;
    int breadth1;
    int radius1;
    int width1;


    void rectangle(int , int , int ) ;
    int volume_rectangle();

    void square(int ) ;
    int volume_square();

    void circle(int );
    int volume_circle();

};

void Area::rectangle(int a, int b)
{
    length= a;
    breadth= b;
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
    return (length*length);
}

void Area::circle(int e)
{
    e=radius;
}
int  Area::area_circle()
{
    return (pi*radius*radius);
}

//for next class of volume class

void Volume::rectangle(int x, int y,int z)
{
    length1=x;
    breadth1=y;
    width1=z;
}
int Volume::volume_rectangle()
{
    return length1*breadth1*width1;
}
void Volume::square(int d1)
{
    d1=length1;
}
int Volume::volume_square()
{
    return length1*length1*length1;
}

void Volume::circle(int e1)
{
    e1=radius1;
}
int  Volume::volume_circle()
{
    return 0.75*pi*radius1*radius1*radius1;
}

int main()
{
    int val1;
    cout<<"Enter 1 for Rectangle, 2 for Square,3 for Circle:";
    cin>>val1;
    cout<<endl;
    Area are;
    Volume vol;

    int length2,breadth2,width2,radius2;

    switch(val1)
    {
    case 1:
    int val2;
    cout<<"enter 1 for area, 2 for volume and 3 for both:";
    cin>>val2;
    if(val2==1)
    {
        cout<<"enter value of length:";
        cin>>length2;
        cout<<"enter value of breadth:";
        cin>>breadth2;
        are.rectangle(length2, breadth2);
        cout<<"area of rectangle:"<<are.area_rectangle();
    }

    else if (val2==2)
    {
        cout<<"enter value of length:";
        cin>>length2;
        cout<<"enter value of breadth:";
        cin>>breadth2;
        cout<<"enter value of width:";
        cin>>width2;
        vol.rectangle(length2,breadth2,width2);
        cout<<"volume of cuboid is:"<<vol.volume_rectangle();
    }

    else
    {
        cout<<"enter value of length:";
        cin>>length2;
        cout<<"enter value of breadth:";
        cin>>breadth2;
        cout<<"enter value of width:";
        cin>>width2;
        are.rectangle(length2,breadth2);
        vol.rectangle(length2,breadth2,width2);
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
        cin>>length2;
        are.square(length2);
        cout<<"area of square is:"<<are.area_square();
    }
    else if (val4==2)
    {
        cout<<"enter value of length";
        cin>>length2;
        vol.square(length2);
        cout<<"volume of cube is:"<<vol.volume_square();
    }

    else
    {
        cout<<"enter value of length";
        cin>>length2;
        are.square(length2);
        vol.square(length2);
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
        cin>>radius2;
        are.circle(radius2);
        cout<<"area of circle:"<<are.area_circle();
    }

    else if (val3==2)
    {
        cout<<"enter value of radius:";
        cin>>radius2;
        vol.circle(radius2);
        cout<<"volume of sphere:"<<vol.volume_circle();
    }

    else
    {
        cout<<"enter value of radius:";
        cin>>radius2;
        are.circle(radius2);
        vol.circle(radius2);
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