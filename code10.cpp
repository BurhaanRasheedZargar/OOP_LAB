#include<iostream>
using namespace std;
void del(int arr[], int *size, int position)
{
    if(position<0 || position>=*size)
    {
        cout<<"Invalid location."<<endl;
        return;
    }
    for(int i=position;i<*size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    (*size)--;
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int d;
    cout<<"Enter the position you want to delete:";
    cin>>d;
    del(a,&n,d);
    cout<<"Array after deletion:";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}