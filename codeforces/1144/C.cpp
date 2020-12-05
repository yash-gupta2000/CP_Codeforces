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
	 map<int,int> m;
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 m[a[i]]++;
	 }
	 for(auto it:m){
		 if(it.second > 2){
			 cout<<"NO"<<endl;
			 return;
		 }
	 }
	 vector<int> b,c;
	 for(auto it:m){
		 if(it.second == 1){
			 b.pb(it.first);
		 }
		 else{
			 b.pb(it.first);
			 c.pb(it.first);
		 }
	 }
	 sort(all(b));
	 sort(all(c),greater<int>());
	 cout<<"YES"<<endl;
	 cout<<b.size()<<endl;
	 for(auto it:b){
		 cout<<it<<" ";
	 }
	 cout<<endl;
	 cout<<c.size()<<endl;
	 for(auto it:c){
		 cout<<it<<" ";
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