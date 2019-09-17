#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll sum=0;
ll small=INT_MAX;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    v.push_back(0);
    ll a[n];
    ll temp=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        temp+=a[i];
        v.push_back(temp);
    }
    for(int i=k;i<v.size();i++)
    {
        if(small>v[i]-v[i-k])
        {
            small=v[i]-v[i-k];
            sum=i-k+1;
        }
 
    }
    cout<<sum<<"\n";
   
}