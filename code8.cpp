#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows and columns:";
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}