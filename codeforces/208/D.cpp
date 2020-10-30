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
	 a.resize(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 vector<pair<int,int>> prizes(5);
	 for(int i=0;i<5;i++){
		 cin>>prizes[i].first;
		 prizes[i].second = i;
	 }
	 sort(all(prizes),greater<pair<int,int>>());
	 vector<int> cnt(5,0);
	 int points = 0;
	 for(int i=0;i<n;i++){
		 points += a[i];
		 //cout<<points<<" ";
		 for(int j=0;j<5;j++){
			 if(points >= prizes[j].first){
				 //cout<<j<<" ";
				 int cntx = 0;
				 cntx += (points/prizes[j].first);
				 //cout<<cntx<<" ";
				 cnt[prizes[j].second] += cntx;
				 points -= (prizes[j].first * cntx);
				 //cout<<points<<" ";
			 }
		 }		 
		 //cout<<endl;
	 }
	 for(int i=0;i<5;i++){
		 cout<<cnt[i]<<" ";
	 }
	 cout<<endl;
	 cout<<points<<endl;
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