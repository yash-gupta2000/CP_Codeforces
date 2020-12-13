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

void solve()
{
	 int n,m,k;cin>>n>>m>>k;
	 vector<pair<int,int>> a(n+1,{0,0});
	 vector<bool> vis(n+1,false);
	 int res=0;
	 for(int i=1;i<=n;i++){
		 cin>>a[i].first;
		 a[i].second = i;
	 }
	//  for(int i=1;i<=n;i++){
	// 	 cout<<a[i].first<<" "<<a[i].second<<endl;
	//  }
	//  cout<<endl;
	 // ans is m*k big elements
	 sort(a.begin()+1,a.end(),greater<pair<int,int>>());
	//  for(int i=1;i<=n;i++){
	// 	 cout<<a[i].first<<" "<<a[i].second<<endl;
	//  }
	 for(int i=1;i<=m*k;i++){
		 res += a[i].first;
		 vis[a[i].second] = true;
	 }
	 cout<<res<<endl;
	 int currseg=0;
	 vector<int> partitions;
	 for(int i=1;i<=n;i++){
		 if(vis[i]){
			 currseg++;
			 if(currseg==m){
				 partitions.pb(i);
				 currseg = 0;
			 }
		 }
	 }
	 for(int i=0;i<k-1;i++){
		 cout<<partitions[i]<<" ";	
	 }
	 cout<<endl;
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