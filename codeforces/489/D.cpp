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
const int N = 3005;
const int inf = 9e18 + 9;
const int mod = 1e9+7;
vector<int> adj[N];
vector<int> cnt(N,0);
void dfs(int node,int len){
	if(len==2){
		cnt[node]++;
		return;
	}
	for(auto it:adj[node]){
		dfs(it,len+1);
	}
}
void solve()
{
	 int n,m;
	 cin>>n>>m;
	 for(int i=0;i<m;i++){
		 int x,y;cin>>x>>y;
		 --x,--y;
		 adj[x].pb(y);
	 }
	 int res=0;
	 for(int i=0;i<n;i++){
		 for(int j=0;j<n;j++){
			 cnt[j] = 0;
		 }
		 dfs(i,0);
		 for(int j=0;j<n;j++){
			 if(j!=i){
				 res += (cnt[j]*(cnt[j]-1))/2;
			 }
		 }
	 }
	 cout<<res<<endl;
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