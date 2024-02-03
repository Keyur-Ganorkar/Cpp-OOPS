#include<iostream>
using namespace std;

class Mth
{
    int num;
    public:
    void setv(int val)
    {
        num=val;
    }
    Mth operator +(Mth &obj)
    {
        Mth temp;
        temp.num=num+obj.num;
        return temp;
    }
    Mth operator -(Mth &obj)
    {
        Mth temp;
        temp.num=num-obj.num;
        return temp;
    }
    void getv()
    {
        cout<<num;
    }
};

int main()
{
    Mth obj1,obj2,rpobj;
    obj1.setv(10);
    obj2.setv(30);
    cout<<"obj1";
    obj1.getv();
    rpobj=obj1+obj2;
    cout<<"\nobj1+obj2=";
    rpobj.getv();
    rpobj=obj1-obj2;
    cout<<"\nobj1-obj2=";
    rpobj.getv();

return 0;
}