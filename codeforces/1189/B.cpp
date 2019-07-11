#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;cin>>n;
    ll a[n];
    int flag=0;
    int flagg=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);
    
    if(a[0]<a[1]+a[n-1])
    {
        flag=1;
    }
    else
    {
        flagg=1;
    }
    if(a[n-1]>=a[n-2]+a[0])
    {
        int temp=a[n-2];
        a[n-2]=a[n-1];
        a[n-1]=temp;
        flag=1;
        
    }
    
    if(flag)
    {
        for(int i=1;i<n-1;i++)
        {
            if(a[i]<a[i+1]+a[i-1])
            {
                continue;
            }
            else
            {
                flagg=1;
            }
        }
    }
    if(flagg)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}