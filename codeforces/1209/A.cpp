#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int colors=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]%a[i]==0)
            {
                a[j] = 10000;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<10000)
        {
            colors++;
        }
    }
    cout<<colors;
}