/*Write a program to demonstrate the use of friend function.*/
#include <iostream>
using namespace std;
int Area(int l,int w)
{
    int area=l*w;
    return area;
}
class Rect
{
private:
    int l;
    int  w;

public:
friend int Area(int l,int w);
void display()
{
    cout<<"Length : "<<l<<endl<<"Breadth : "<<w<<endl;
}    
Rect(int length, int width) : l(length), w(width) {}
};
int main() 
{   
    int len, wid;
    cout<<"Length : ";
    cin>>len;
    cout<<"Breadth : ";
    cin>>wid;
    Rect r1(len,wid);
    r1.display();
    cout << "Area = " << Area (len,wid);
    return 0;
}
