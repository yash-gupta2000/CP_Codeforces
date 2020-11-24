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

void solve()
{
	 int n;cin>>n;
	 vector<int> a(n);
	 map<int,vector<int>> m;
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 m[a[i]].pb(i+1);
	 }
	//  for(auto it:m){
	// 	 cout<<it.first<<"->";
	// 	 for(auto x:it.second){
	// 		 cout<<x<<" ";
	// 	 }
	// 	 cout<<endl;
	//  }
	 
	 int res = INT_MAX;
	 for(auto it:m){
		 int curr = 0;
		 int prev = m[it.first][0];{
			 if(prev!=1){
				 curr++;
			 }
		 }
		 for(int i=1;i<it.second.size();i++){
			 if(m[it.first][i] == prev+1){
				 prev++;
				 continue;
			 }
			 else{
				 prev = m[it.first][i];
				 curr++;
			 }
		 }
		 if(prev!=n){
			 curr++;
		 }
		 //cout<<curr<<endl;
		 res = min(res,curr);
	 }
	 cout<<res<<endl;
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