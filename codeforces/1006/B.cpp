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
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(k);//index track krte h isme
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	int mx = -1;
	int idx;
	for (int i = 0; i < k; i++)
	{
		mx = -1;
		for (int j = 0; j < n; j++)
		{
			if (b[j] > mx)
			{
				mx = b[j];
				idx = j;
			}
		}
		b[idx] = INT_MIN;
		c[i] = idx;
	}
	sort(all(c));
	int res = 0;
	for (int i = 0; i < k; i++)
	{
		res += a[c[i]];//jyada wala add krdo
	}
	cout << res << endl;
	if (k == 1)
		cout << n << endl;
	else
	{
		for (int i = 0; i < k - 1; i++)
		{
			if (i == 0)
			{
				//start ka special case
				res = c[i] + (c[i + 1] - c[i]);
			}
			else
			{
				res = c[i + 1] - c[i];
			}
			cout << res << " ";
		}
		//end ka special case
		res = n - c[k - 1];
		cout << res << endl;
	}
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