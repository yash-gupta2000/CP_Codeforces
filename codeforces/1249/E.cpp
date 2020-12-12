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
vector<int> lift;
vector<int> elev;
int dp[2][N];
// int go(int idx,int type,int n,int c){
// 	if(idx > n-1){
// 		return 0;
// 	}
// 	if(dp[idx][type]!=-1){
// 		return dp[idx][type];
// 	}
// 	int smallans=0;
// 	if(type==0){
// 		smallans = min(lift[idx] + go(idx+1,type,n,c),c+elev[idx]+go(idx+1,!type,n,c));
// 	}
// 	else{
// 		smallans = min(lift[idx] + go(idx+1,!type,n,c),elev[idx] + go(idx+1,type,n,c));
// 	}
// 	return dp[idx][type] = smallans;
// }
void solve()
{
	int n, c;
	cin >> n >> c;
	lift.resize(n + 1);
	elev.resize(n + 1);
	for (int i = 2; i <= n; i++)
	{
		cin >> lift[i];
	}
	for (int j = 2; j <= n; j++)
	{
		cin >> elev[j];
	}
	mem(dp, -1);
	dp[0][1] = 0;
	dp[1][1] = c;
	for (int i = 2; i <= n; i++)
	{
		dp[0][i] = min(dp[0][i - 1], dp[1][i - 1]) + lift[i];
		dp[1][i] = min(dp[0][i - 1] + c, dp[1][i - 1]) + elev[i];
	}

	for (int i = 1; i <= n; i++)
	{
		cout << min(dp[0][i], dp[1][i]) << " ";
	}
	cout << endl;
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