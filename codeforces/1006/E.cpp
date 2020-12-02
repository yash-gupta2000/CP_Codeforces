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
vector<int> adj[N];
vector<int> a;
vector<int> inTime(N);
vector<int> outTime(N);
int times=0;

void dfs(int node){
	inTime[node] = ++times;
	a.pb(node);
	for(auto it:adj[node]){
		dfs(it);
	}
	outTime[node] = ++times;
}

void solve()
{
	 int n,queries;cin>>n>>queries;
	 a.pb(0);
	 for(int i=2;i<=n;i++){
		 int x;cin>>x;
		 adj[x].pb(i);
	 }
	 dfs(1);
	 vector<int> b(N);
	 for(int i=1;i<=n;i++){
		 b[a[i]] = i;
	 }
	 while(queries--){
		 int node,k;cin>>node>>k;
		 if((outTime[node]-inTime[node]+1)/2 < k){
			 cout<<"-1"<<endl;
		 }
		 else{
			 cout<<a[b[node] + k - 1]<<endl;
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