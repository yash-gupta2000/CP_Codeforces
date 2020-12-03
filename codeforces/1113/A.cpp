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
	 int n,v;cin>>n>>v;
	 int res=0;
	 if(n == v){
		 cout<<v-1<<endl;
	 }
	 else if(n<v){
		 cout<<n-1<<endl;
	 }
	 else if(n==(v+1)){
		 cout<<v<<endl;
	 }
	 else{
		 int res = 0;
		 res += v;
		 int dist = (n-1)-v;
		 int ptr=1;
		 while(dist--){
			 ptr++;
			 res += ptr;
		 }
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