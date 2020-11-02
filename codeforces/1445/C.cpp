/*
author: Yash Gupta
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define IOS                  \
	ios::sync_with_stdio(0); \
	cin.tie(0);              \
	cout.tie(0);
#define endl "\n"
#define mem(x, y) memset(x, y, sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e5 + 5;
const int inf = 9e18 + 9;
const int mod = 1e9 + 7;
template <typename G>
void primeFactors(G n, vector<G> &pf)
{
	if (n % 2 == 0)
		pf.pb(2);
	while (n % 2 == 0)
		n = n / 2;
	int limit = sqrt(n);
	for (int i = 3; i <= limit; i = i + 2)
	{
		if (n % i == 0)
			pf.pb(i);
		while (n % i == 0)
			n = n / i;
	}
	if (n > 2)
		pf.pb(n);
}

void solve()
{
	int p, q;
	cin>>p>>q;
	if (p % q != 0)
	{
		cout<<p<<endl;
		return;
	}
	vector<int> f;
	primeFactors(q, f);
	sort(all(f));
	int ans = -1;
	// for(auto it:f){
	// 	cout<<it<<" ";
	// }
	// cout<<endl;
	for(auto it:f){
		if(p%it){
			continue;
		}
		int x = p/it;
		if(x%q){
			ans = max(ans,x);
		}
		while(x%it==0){
			if(x%q){
				ans = max(ans,x);
			}
			x /= it;
		}
		if(x%q){
			ans = max(ans,x);
		}
	}
	cout<<ans<<endl;
	return;
}

int32_t main()
{
	IOS;
	int t = 1;
	cin>>t;
	for (int i = 1; i <= t; i++)
	{
		solve();
	}
}