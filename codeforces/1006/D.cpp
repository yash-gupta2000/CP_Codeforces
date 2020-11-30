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
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	int res = 0;
	int iter;
	if (n % 2)
	{
		iter = (n / 2) + 1;
		if (a[iter - 1] != b[iter - 1])
		{
			res++;
		}
	}
	for (int i = 0; i < n / 2; i++)
	{
		int l = i, r = n - i - 1;
		if ((a[l] == b[l] && a[r] == b[r]) || (a[l] == b[r] && a[r] == b[l]) || (a[l] == a[r] && b[l] == b[r])){
			continue;
		}
		else if (a[l] == b[l] || a[r] == b[r] || a[l] == b[r] || a[r] == b[l] || b[l] == b[r]){
			res++;
		}
		else{
			res += 2;
		}
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