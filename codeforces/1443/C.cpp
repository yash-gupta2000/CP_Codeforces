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
	 int sum = 0;
	 int time = 1e10;
	 vector<pair<int,int>> a(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i].first;
	 }
	 for(int i=0;i<n;i++){
		 cin>>a[i].second;
		 sum += a[i].second;
	 }
	 sort(all(a));
	 if(a[0].first > sum){
		 cout<<sum<<endl;
		 return;
	 }
	 for(int i=0;i<n;i++){
		 sum -= a[i].second;
		 time = min(time,max(a[i].first,sum));
	 }
	 cout<<time<<endl;
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