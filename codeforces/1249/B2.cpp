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
	 vector<int> a(n+1);
	 for(int i=1;i<=n;i++){
		 cin>>a[i];
	 }
	 vector<int> res(n+1);
	 vector<bool> vis(n+1,false);
	 for(int i=1;i<=n;i++){
		 if(!vis[i]){
			 vector<int> cycle;
			 while(!vis[i]){
				 cycle.pb(i);
				 vis[i] = true;
				 i = a[i];
			 }
			 for(auto it:cycle){
				 //jo jo cycle m h, unhe cycle size time lagega
				 int kid = it;
				 res[kid] = cycle.size();
			 }
		 }
	 }
	 for(int i=1;i<=n;i++){
		 cout<<res[i]<<" ";
	 }
	 cout<<endl;

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