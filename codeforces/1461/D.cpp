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
vector<int> pref;
set<int> s;
void go(int l,int r){
	s.insert(pref[r]-pref[l-1]);
	if(l==r){
		return;
	}
		int mid = (a[l]+a[r])/2;
		int idx = upper_bound(a.begin()+1,a.end(),mid)-a.begin();
		if(idx>l && idx!=r+1){
			go(l,idx-1);
		}
		if(idx<=r && idx!=l){
			go(idx,r);
		}
}
void solve()
{
	 int n,queries;;cin>>n>>queries;
	 a.resize(n+1);
	 pref.resize(n+1);
	 for(int i=1;i<=n;i++){
		 cin>>a[i];
	 }
	 sort(a.begin()+1,a.end());
	 for(int i=1;i<=n;i++){
		 pref[i] = pref[i-1] + a[i];
	 }
	go(1,n);
	//  for(auto it:s){
	// 	 cout<<it<<endl;
	//  }
	 while(queries--){
		 int x;cin>>x;
		 if(s.count(x)){
			 cout<<"YES"<<endl;
		 }
		 else{
			 cout<<"NO"<<endl;
		 }
	 }
	 s.clear();
	 a.clear();
	 pref.clear();
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