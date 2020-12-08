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
	 int n,k;cin>>n>>k;
	 vector<int> a(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 map<int,vector<int>> m;
	 for(int i=0;i<n;i++){
		 //hrr element ke brabar bnane m operations
		 int elmt = a[i];
		 int operations = 0;
		 while(elmt){
			 m[elmt].pb(operations);
			 elmt /= 2;
			 operations++;
		 }
	 }
	 int res = INT_MAX;
	 for(auto it:m){
		 sort(all(it.second));
		 if(it.second.size() < k){
			 continue;
		 }
		 else{
			 int sum = 0;
			 for(int i=0;i<k;i++){
				 sum += it.second[i];
			 }
			 res = min(res,sum);
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