#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,m;cin>>n>>m;
    ll ans=0;
    if(m==1 && n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    if(m==n/2)
    {
        ans = m+1;
    }
    else if(m>n/2)
    {
        ans = m-1;
    }
    else
    {
        ans = m+1;
    }
    cout<<ans<<endl;
    
}