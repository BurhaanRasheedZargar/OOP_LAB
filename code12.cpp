#include<iostream>
using namespace std;
void sort(int a[],int *size)
{
    for (int i = 0; i < *size; i++)
    {
        for (int j = i+1; j < *size; j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
int main()
{
    int x, y;
    cout<<"Enter the size of first array:";
    cin>>x;
    int a[x];
    cout<<"Enter the elements:";
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of second array:";
    cin>>y;
    int b[y];
    cout<<"Enter the elements:";
    for (int i = 0; i < y; i++)
    {
        cin>>b[i];
    }
    sort(a,&x);
    sort(b,&y);
    int c[x+y];
    for (int i = 0; i < x; i++)
    {
        c[i]=a[i];
    }
    for (int i = x, j=0; i < x+y,j<y; i++,j++)
    {   
        c[i]=b[j];
    }
    cout<<"After merging:";
    for (int i = 0; i < x+y; i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}