#include<iostream>
using namespace std;

class Test
{
int code;
static int count;
public:
void setcode()
{
    code=++count;
}  
void show()
{
    cout<<"object number:"<<code<<"\n";
}  
static void showcount()
{
    cout<<"count:"<<count<<"\n";
}
};

int Test::count;


int main()
{
    Test t1,t2;
    t1.setcode();
    Test::showcount();
    t2.setcode();
    Test::showcount();
    Test t3;
    t3.setcode();
    Test::showcount();
    t1.show();
    t2.show();
    t3.show();
    


return 0;
}