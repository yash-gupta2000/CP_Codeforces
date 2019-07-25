#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll n;
    cin>>n;
    ll first[n],second[n];
    for(ll i=0;i<n;i++)
    {
        cin>>first[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>second[i];
    }
    
    for(ll i=1;i<n;i++)
    {
        first[i] = max(first[i]+second[i-1],first[i-1]);
        second[i] = max(second[i]+first[i-1],second[i-1]);
    }
    
    ll ans = max(first[n-1],second[n-1]);
    cout<<ans<<endl;
    
    
}
