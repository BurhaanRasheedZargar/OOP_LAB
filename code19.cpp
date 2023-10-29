#include<iostream>
using namespace std;
class student
{
    int roll;
    public:
    student(int a)
    {   
        roll=a;
    }
    student()
    {
        roll=1;
    }
    student(student &o)
    {
        roll=o.roll;
    }
    void display()
    {
        cout<<roll<<endl;
    }
};
int main()
{
    student s1;
    student s2(12);
    student s3(s2);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}