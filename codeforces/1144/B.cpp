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
	 int n;cin>>n;
	 int nodd=0,neven=0;
	 vector<int> a(n);
	 vector<int> odd;vector<int> even;
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 if(a[i]%2){
			 nodd++;
			 odd.pb(a[i]);
		 }
		 else{
			 neven++;
			 even.pb(a[i]);
		 }
	 }
	 if(nodd == neven || abs(nodd-neven)==1){
		 cout<<"0"<<endl;
	 }
	 else if(nodd>neven){
		 int cnt = nodd-neven-1;
		 int res=0;
		 sort(all(odd));
		 for(auto it:odd){
			 if(cnt>0){
				 res += it;
			 }
			 cnt--;
		 }
		 cout<<res<<endl;
	 }
	 else{
		 int cnt = neven-nodd-1;
		 int res=0;
		 sort(all(even));
		 for(auto it:even){
			 if(cnt>0){
				 res += it;
			 }
			 cnt--;
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