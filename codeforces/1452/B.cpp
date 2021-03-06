/*
author: Yash Gupta
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e5 + 5;
const int inf = 9e18 + 9;
const int mod = 1e9+7;
vector<int> a;

void solve()
{
	int n;
	 cin >> n;
	 vector<int> a(n+1);
		int ans = 0, sum = 0;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		sort(all(a));
		for(int i = 1; i <= n; i++)
		{
			int mx = a[n];
			if(i == n)
				mx = a[n - 1];
			int reqd = mx * (n - 1) - (sum - a[i]);
			int have = a[i];
			if(have <= reqd)
				ans = max(ans, reqd - have);
			else
			{
				have -= reqd;
				ans = max(ans, (n - 1 - (have % (n - 1))) % (n - 1));
			}
		}
		cout << ans << endl;
}
 
int32_t main()
{
	IOS;int t = 1;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		solve();
	}
}