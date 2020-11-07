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
int n,k;
vector<vector<int>> dp;
int go(int len,int num){
	if(len==k-1){
		return 1;
	}
	if(dp[len][num]!=-1){
		return dp[len][num];
	}
	dp[len][num] = 0;
	for(int j=1;j*num<=n;j++){
		dp[len][num] += go(len+1,j*num);
		dp[len][num] %= mod;
	}
	return dp[len][num];
}
void solve()
{
	 cin>>n>>k;
	 dp = vector<vector<int>>(k+1,vector<int>(n+1,-1));
	 int ans=0;
	 for(int i=1;i<=n;i++){
		 ans += go(0,i);
		 ans %= mod;
	 }
	 cout<<ans<<endl;
}
 
int32_t main()
{
	IOS;int t = 1;
	// cin>>t;
	for(int i=1;i<=t;i++)
	{
		solve();
	}
}