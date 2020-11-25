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
	 int k;cin>>k;
	 map<int,pair<int,int>> m;
	 for(int i=0;i<k;i++){
		 int n;cin>>n;
		 vector<int> a(n);
		 int sum=0;
		 for(int j=0;j<n;j++){
			 cin>>a[j];
			 sum += a[j];
		 }
		 bool flag = false;
		 for(int j=0;j<n;j++){
			 if(m.count(sum-a[j])){
				 flag = true;
				 cout<<"YES"<<endl;
				 cout<<i+1<<" "<<j+1<<endl;
				 cout<<m[sum-a[j]].first+1<<" "<<m[sum-a[j]].second+1<<endl;
				 return;
			 }
		 }
		 for(int j=0;j<n;j++){
			 m[sum-a[j]] = {i,j};
		 }
	 }
	 cout<<"NO"<<endl;	 

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