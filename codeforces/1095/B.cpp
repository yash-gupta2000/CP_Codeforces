#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    long long dx=0;
    long long dy=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    
    dx=a[n-1]-a[1];
    dy=a[n-2]-a[0];
    
    if(dx>dy)
    {
        cout<<dy;
    }
    else
    {
        cout<<dx;
    }
    
    return 0;
}