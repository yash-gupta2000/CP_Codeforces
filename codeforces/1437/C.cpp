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
int dp[205][2000];
int go(int idx,int time){
	if(idx == a.size()){
		return 0;
	}
	if(time > 1000){
		return inf;
	}
	if(dp[idx][time]!=-1){
		return dp[idx][time];
	}
	int smallans = min(abs(a[idx]-time) + go(idx+1,time+1),go(idx,time + 1));
	return dp[idx][time] = smallans;
}
void solve()
{
	mem(dp,-1);
	 int n;cin>>n;
	 a.resize(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 sort(all(a));
	 int res = inf;
	 for(int i=1;i<=200;i++){
		 res = min(res,go(0,i));
	 }
	 cout<<res<<endl;
	 a.clear();
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