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
	 int x;cin>>x;
	 vector<pair<int,int>> a(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i].first;
		 cin>>a[i].second;
	 }
	 //koi bhi aisa point jispr sab accumulate ho ske.
	 bool flag = true;
	 for(int i=0;i<n;i++){
		 flag = true;
		 for(int j=0;j<n;j++){
			 int dist = abs(a[i].first-a[j].first) + abs(a[i].second - a[j].second);
			 if(dist > x){
				 flag = false;
				 break;
			 }
		 }
		 if(flag){
			 cout<<1<<endl;
			 return;
		 }
	 }
	 cout<<"-1"<<endl;
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