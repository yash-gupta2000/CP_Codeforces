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
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 vector<int> pref(n);
	 vector<int> suff(n);
	 pref[0] = a[0];
	 suff[n-1] = a[n-1];
	 for(int i=1;i<n;i++){
		 pref[i] = pref[i-1] + a[i];
	 }
	 for(int i=n-2;i>=0;i--){
		 suff[i] = suff[i+1] + a[i];
	 }
	//  for(int i=0;i<n;i++){
	// 	 cout<<pref[i]<<" ";
	//  }
	//  cout<<endl;
	//  for(int i=0;i<n;i++){
	// 	 cout<<suff[i]<<" ";
	//  }
	//  cout<<endl;
	 int res = 0;
	 for(int i=n-1;i>0;i--){
		 int suffix = suff[i];
		 int idx = lower_bound(pref.begin(),pref.begin()+n-1,suffix) - pref.begin();
		 //cout<<suffix<<" "<<idx<<" ";
		 if(idx < i && pref[idx]==suffix){
			 //cout<<"ran";
			 res = max(res,suffix);
		 }
		 //cout<<endl;
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