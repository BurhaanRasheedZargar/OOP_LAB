#include<iostream>
using namespace std;
class dm;
class db;
void conv(db,dm);
class dm
{
    int m;
    int cm;
    public:
    void getdata1(int a, int b)
    {
        m=a;
        cm=b;
    }
    void display()
    {
        cout<<"Length is "<<m<<" meters and "<<cm<<" centimeters.\n";
    }
    friend void conv(db,dm);
};
class db
{
    int ft;
    int in;
    public:
    void getdata2(int a, int b)
    {
        ft=a;
        in=b;
    }
    void display()
    {
        cout<<"Length is "<<ft<<" feet and "<<in<<" inches.\n";
    }
    friend void conv(db,dm);
};
void conv(db obj1,dm obj2)
{   
    int c;
    cout<<"Enter 1 for m to ft and 2 for ft to m:";
    cin>>c;
    if(c==1)
    {
        float r1=obj1.ft/3.281;
        float r2=obj1.in*2.54;
        cout<<r1<<"feet and "<<r2<<" inches."<<endl;
    }
    else if(c==2)
    {
        float r3=obj2.m*3.281;
        float r4=obj2.cm/2.54;
        cout<<r3<<" meters and "<<r4<<" centimeters."<<endl;
    }
}
int main() 
{
    dm obj1;
    obj1.getdata1(6,2);
    obj1.display();
    db obj2;
    obj2.getdata2(10,2);
    obj2.display();
    conv(obj2,obj1);
    return 0;
}
