#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter elements in an array:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int c[n];

    for (int i = 0; i < n; i++)
    {
        c[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i]==a[j])
            {
                c[i]++;
            }
        }
    }
    int d[n];
    for (int i = 0; i < n; i++)
    {
        d[i]=c[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(c[i]>c[j])
            {
                int temp=c[j];
                c[j]=c[i];
                c[i]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(d[i]==c[n-1])
        {
            cout<<"Mode:"<<a[i]<<endl;
            break;
        }
    }
    cout<<"Frequency:"<<c[n-1];
    return 0;
}