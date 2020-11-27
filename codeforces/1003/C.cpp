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
	 vector<int> prefix(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 prefix[0] = a[0];
	 for(int i=1;i<n;i++){
		 prefix[i] = a[i]+prefix[i-1];
	 }
	//  for(int i=0;i<n;i++){
	// 	 cout<<prefix[i]<<" ";
	//  }
	//  cout<<endl;
	 double res=0;
	 vector<double> avg;
	 int len = n;
	 while(len >= k){
		 for(int i=0;i<n;i++){
			 if(i+len-1 < n){
				 int curr=0;
				 if(i==0){
					 curr = prefix[i+len-1];
				 }
				 else{
					 curr = prefix[i+len-1] - prefix[i-1];
				 }
				 double curravg = (double)curr/(double)(len);
				 //cout<<fixed<<setprecision(8)<<curr<<" "<<(i+len-1)<<" "<<curravg<<" "<<len<<endl;
				 avg.pb(curravg);
			 }
		 }
		 len--;
	 }
	//  for(auto it:avg){
	// 	 cout<<it<<" ";
	//  }
	//  cout<<endl;
	 for(auto it:avg){
		 res = max(res,it);
	 }
	 cout<<fixed<<setprecision(12)<<res<<endl;	 
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