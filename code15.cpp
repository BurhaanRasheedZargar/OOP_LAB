#include<iostream>
using namespace std;
int main()
{
    char *s[]={"knowledge","is","power"};
    char **p;
    p=s;
    cout<<"1."<<**s<<endl;
    cout<<"2."<<*p<<endl;
    cout<<"3."<<**p<<endl;
    cout<<"4."<<++*p<<endl;
    cout<<"5."<<*p++<<endl;
    cout<<"6."<<++(*p)<<endl;
    cout<<"7."<<**s<<endl;
    cout<<"8."<<**p<<endl;
    return 0;
}