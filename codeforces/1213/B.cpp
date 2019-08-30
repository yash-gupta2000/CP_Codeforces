#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll q;cin>>q;
  while(q--)
  {
    ll n;
    cin>>n;
    ll a[n];
    vector<ll> v(n,0);
    ll cnt=0;
    
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    ll min = a[n];
    for(int i = n-1;i>=0;i--)
    {
      if(a[i]<min)
      {
        min =a[i];
        v[i] = min;
      }
      else
      {
      	v[i] = min;
      }
    }

    // for(int i=0;i<n;i++)
    // {
    //   cout<<v[i];
    // }
    for(int i=0;i<n;i++)
    {
    	if(v[i]!=a[i])
    	{
    		cnt++;
    	}
    	else
    	{
    		continue;
    	}
    }
    cout<<cnt<<endl;
  }
}