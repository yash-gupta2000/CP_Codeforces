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
vector<int> pw;
void init(){
	for(int i=1;i<=31;i++){
		pw.pb(pow(2,i));
	}
}
void solve()
{
	 init();
	//  for(auto it:pw){
	// 	 cout<<it<<" ";
	//  }
	//  cout<<endl;
	 int n;cin>>n;
	 vector<int> a(n);
	 map<int,bool> vis;
	 map<int,int> freq;
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 vis[a[i]] = false;
		 freq[a[i]]++;
	 }
	 sort(all(a));
	 for(int i=0;i<n;i++){
		 int elmt = a[i];
		 for(int j=0;j<pw.size();j++){
			 int search = pw[j]-elmt;
			 //cout<<elmt<<" "<<search<<endl;
			 int idx = lower_bound(all(a),search)-a.begin();
			 if(idx >=0 && idx<n && a[idx] == search && idx!=i){
				 //cout<<idx<<" "<<i<<endl;
				 //cout<<"final "<<elmt<<" "<<search<<endl;
				 vis[elmt] = true;
				 vis[search] = true;
			 }
		 }
	 }
	 int cnt=0;
	 for(auto it:vis){
		 if(it.second==false){
			 //cout<<it.first<<endl;
			 cnt += freq[it.first];
		 }
	 }
	 cout<<cnt<<endl;	
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