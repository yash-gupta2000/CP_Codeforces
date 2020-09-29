//Currently in Spain, But S is silent :|
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e5 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;

void solve()
{
     vector<ll> a = {0};
     for(int i=0; i<1000; i++) {
		a.pb(a[i]*10+4);
		a.pb(a[i]*10+7);
	}
	sort(all(a));
	ll l,r;
	cin>>l>>r;
	ll ans=0;
	for(int i=1; i<a.size(); i++)
		ans+=a[i]*max((ll)0,min(r,a[i])-max(l-1,a[i-1]));
	cout<<ans<<endl;
}
 
int main()
{
    IOS;ll t = 1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}