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
	 int n,k;cin>>n>>k;
	 pair<int,pair<int,int>> a[n];
	 vector<int> aa(n);
	 vector<int> b(n);
	 for(int i=0;i<n;i++){
		 cin>>aa[i];
	 }
	 for(int i=0;i<n;i++){
		 cin>>b[i];
	 }
	 for(int i=0;i<n;i++){
		 int diff = aa[i]-b[i];
		 a[i] = {diff,{aa[i],b[i]}};
	 }
	 int res=0;
	 sort(a,a+n);
	 for(int i=0;i<n;i++){
		 if(a[i].first <= 0){
			 res += a[i].second.first;
			 k--;
		 }
		 else if(k>0){
			 res += a[i].second.first;
			 k--;
		 }
		 else{
			 res += a[i].second.second;
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