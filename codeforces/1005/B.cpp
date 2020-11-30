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
vector<int> a;

void solve()
{
	int res = 0;
	string s, t;
	cin >> s >> t;
	int i = s.size() - 1;
	int j = t.size() - 1;
	while (i >= 0 && j >= 0)
	{
		if (s[i] != t[j])
		{
			break;
		}
		i--, j--;
	}
	//cout<<res<<endl;
	//  cout<<i<<endl;
	//  cout<<j<<endl;
	if (i!=-1)
	{
		res += i + 1;
	}
	if (j!=-1)
	{
		res += j + 1;
	}
	cout << res << endl;
}

int32_t main()
{
	IOS;
	int t = 1;
	// cin>>t;
	for (int i = 1; i <= t; i++)
	{
		solve();
	}
}