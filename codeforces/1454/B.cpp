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
	 vector<pair<int,int>> a(n+1);
	 for(int i=1;i<=n;i++){
		 cin>>a[i].first;
		 a[i].second = i;
	 }
	 sort(all(a));
	 int res=-1;int ress=INT_MAX;
	 set<int> s;
	 for(int i=1;i<=n;i++){
		 //cout<<"val "<<a[i].first<<endl;
		 if(s.find(a[i].first)!=s.end()){
			 //cout<<i<<endl;
			 if(a[i].first == ress){
				 res = -1;
				 ress = INT_MAX;
			 }
		 }
		 else{
			 if(ress > a[i].first){
				 //cout<<i<<" 2nd"<<endl;
				 ress = a[i].first;
				 res = a[i].second;
			 }
		 }
		 s.insert(a[i].first);
	 }
	 cout<<res<<endl;

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