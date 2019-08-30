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
    ll m;
    cin>>m;
    vector<ll> v;
    map<ll, ll> mp;
    ll mm=m;
    for(int i=0;i<10;i++)
    {
    	if(mp[mm%10])
    		break;
    	v.push_back(mm%10);
    	mm = mm+m;
    	// cout<<v[i]<<endl;
    }
    ll a,b,c;
    a = n/m;
    //cout<<"A"<<" "<<a<<endl;
    b = a / v.size();
    c = a % v.size();
    //cout<<"b"<<b<<" "<<"c"<<c<<endl;
    ll sum1 = 0;
    for(auto i : v){
    	sum1 += i;
    }
    ll ans = b * sum1;
    	for(int i=0;i<c;i++)
    	{
    		ans += v[i];
    	}
    
    cout<<ans<<endl;
    
  }
}