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
const int N = 1e5 + 5;
const int inf = 9e18 + 9;
const int mod = 1e9+7;
vector<int> a;

void solve()
{
	 int n,m;cin>>n>>m;
	 map<int,int> color;
	 int mncolor=INT_MAX;
	 for(int i=1;i<=n;i++){
		 int x;cin>>x;
		 color[i] = x;
		 mncolor = min(mncolor,x);
	 }
	 vector<int> adj[n+1];
	 for(int i=0;i<m;i++){
		 int x,y;cin>>x>>y;
		 adj[x].pb(y);
		 adj[y].pb(x);
	 }
	 vector<set<int>> cnt(1e5+5);
	 for(int i=1;i<=n;i++){
		 set<int> s;
		 for(auto it:adj[i]){
			 if(color[i]==color[it]){
				 continue;
			 }
			 else{
				 s.insert(color[it]);
			 }
		 }
		for(auto it:s){
			cnt[color[i]].insert(it);
		}	 
	 }
	//  for(int i=1;i<=1e5;i++){
	// 	 cout<<cnt[i]<<" ";
	//  }
	//  cout<<endl;
	 int res=0,ress=0;
	 for(int i=1;i<=1e5;i++){
		 if(cnt[i].size() > ress){
			 ress = cnt[i].size();
			 res = i;
		 }
	 }
	 if(res==0){
		 cout<<mncolor<<endl;
	 }
	 else{
		 cout<<res<<endl;
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