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
	int charge, turns, a, b;
	cin>>charge>>turns>>a>>b;
	if (min(a, b) * turns >= charge)
	{
		cout << "-1" << endl;
		return;
	}
	//binary search
	int l = 0, r = turns;
	int res=0;
	while (r >= l)
	{
		//cout<<"ran";
		int m = (l + r) / 2;
		//cout<<m<<" "<<l<<" "<<r<<endl;
		//only plays wale
		int type1 = m * a;
		int type2 = (turns - m) * b;//charge play wale
		if (type1 + type2 < charge)
		{
			//cout<<"ran"<<" "<<m<<endl;
			res = m;
			l = m+1;
		}
		else
		{
			r = m-1;
		}
	}
	cout << res << endl;
}

int32_t main()
{
	IOS;
	int t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		solve();
	}
}