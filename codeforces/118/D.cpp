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
const int mod = 1e8;
vector<int> a;
int n,m,k1,k2;
int dp[105][105][11][11];
int go(int foot,int horse,int footr,int horser){
	//cout<<"ENter"<<endl;
	if(footr > k1 || horser > k2){
		return 0;
	}
	if(foot > n || horse > m){
		return 0;
	}
	if(foot == n && horse == m){
		return 1;
	}
	if(dp[foot][horse][footr][horser]!=-1){
		return dp[foot][horse][footr][horser];
	}
	int smallans = 0;
	if(footr!=0){
		smallans += (go(foot+1,horse,footr+1,0))%mod;
		smallans += go(foot,horse+1,0,horser+1)%mod;
	}
	else{
		smallans += go(foot+1,horse,footr+1,0)%mod;
		smallans += go(foot,horse+1,0,horser+1)%mod;
	}
	return dp[foot][horse][footr][horser] = smallans;

}
void solve()
{
	 cin>>n>>m>>k1>>k2;
	 mem(dp,-1);
	 int ans  = go(0,0,0,0);
	 cout<<ans%mod<<endl;
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