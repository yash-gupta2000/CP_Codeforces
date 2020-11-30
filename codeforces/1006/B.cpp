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
	 int k;cin>>k;
	 vector<pair<int,int>> a(n+1);
	 for(int i=1;i<=n;i++){
		 cin>>a[i].first;
		 a[i].second = i;
	 }
	 int res=0;
	 sort(all(a));
	 vector<int> idx;
	 for(int i=n;i>n-k;i--){
		 res += a[i].first;
		 idx.pb(a[i].second);
	 }
	 cout<<res<<endl;
	 sort(all(idx));
	//  cout<<"debug ";
	//  for(auto it:idx){
	// 	 cout<<it<<" ";
	//  }
	//  cout<<endl;
	 int prev=0;
	 if(idx.size()==1){
		 cout<<n<<endl;
		 return;
	 }
	 for(int i=0;i<idx.size();i++){
		 if(i==0 && idx[i] > 1){
			 cout<<idx[i]<<" ";
			 prev = idx[i];
		 }
		 else if(i==idx.size()-1 && idx[i] < n){
			 cout<<n-prev<<" ";
		 }
		 else{
			 cout<<idx[i]-prev<<" ";
			 prev = idx[i];
		 }
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