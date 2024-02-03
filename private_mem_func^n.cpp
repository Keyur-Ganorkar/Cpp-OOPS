#include<iostream>
using namespace std;

class Sample
{
    int m;
    void read();
    public:
    void update();
    void write();
};
void Sample::update()
{
    read();
}

int main()
{
 Sample s1;
 s1.update();
 
 
return 0;
}