#include<iostream>
#include<vector>
using namespace std;
int sum(int a=1, int b=1)
{
    int s=a+b;
    return s;
}
int sum(int arr[], int size)
{
    int s=0;
    for(int i=0;i<size;i++)
    {
        s+=arr[i];
    }
    return s;
}
int main()
{
    int a,b,n;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;
    cout<<"Enter the size of array:";
    cin>>n;
    int c[n];
    cout<<"Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >>c[i];
    }
    cout<<"Default sum:"<<sum()<<endl;
    cout<<"Sum of the two numbers:"<<sum(a,b)<<endl;
    cout<<"Sum of array:"<<sum(c,n);
    return 0;
}