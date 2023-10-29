#include<iostream>
using namespace std;
class time
{
    int hrs;
    int mins;
    int secs;
    int sec2;
    public:
    void getdata()
    {   
        int a, b, c, d;
        cout<<"Enter time in HH:MM:SS format:";
        cin>>a>>b>>c;
        hrs=a;
        mins=b;
        secs=c;
        cout<<"Enter for sec to HH:MM:SS conversion:";
        cin>>d;
        sec2=d;
    }
    void displaytime()
    {
        cout<<"Time: "<<hrs<<":"<<mins<<":"<<secs<<endl;
    }
    void convtosec()
    {
        int temp1, temp2, t;
        temp1=hrs*3600;
        temp2=mins*60;
        t=temp1+temp2+secs;
        cout<<"Time in seconds: "<<t<<endl;
    }
    void conv()
    {
        int p,q,r;
        p=sec2/3600;
        q=(sec2%3600)/60;
        r=sec2%60;
        cout<<"Time in HH:MM:SS is "<<p<<":"<<q<<":"<<r<<endl;
    }
};
int main() 
{
    time obj1;
    obj1.getdata();
    obj1.displaytime();
    obj1.convtosec();
    obj1.conv();
    return 0;
}