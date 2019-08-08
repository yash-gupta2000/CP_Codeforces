#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;cin>>n;
    ll a[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum = sum+a[i];
    }
    
    sort(a,a+n);
    
    if(sum%2==0 && a[n-1]<=sum-a[n-1])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}