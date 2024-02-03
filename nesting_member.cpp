#include<iostream>
using namespace std;

class Test
{
    int m,n;
    public:
    int largest();
    void input(); 
    void read();
};
int Test::largest()
{
    if(m>=n)
    return m;
    else
    return n;
}
void Test::input()
{
    cout<<"enter the value of m and n:";
    cin>>m>>n;
}
void Test::read()
{
    cout<<"largest number is:"<<largest()<<"\n";
}

int main()
{
Test T1;
T1.input();
T1.read();
}
