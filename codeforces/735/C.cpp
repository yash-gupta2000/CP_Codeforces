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
int dp[200000];
void precompute(){
	dp[0] = 1;
	dp[1] = 2;
	for(int i=2;i<200000;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
}
void solve()
{
	 int n;cin>>n;
	 precompute();
	 for(int i=1;i<200000;i++){
		 if(dp[i]==n){
			 cout<<i<<endl;
			 break;
		 }
		 if(dp[i] > n){
			 cout<<i-1<<endl;
			 break;
		 }
	 }

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