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
	 int wide = 1;
	 int lvl = 0;
	 for(int i=1;i<n;){
		 int idx = i;
		 int parents = 0;
		 while(idx < n){
			 if(a[idx] < a[idx+1]){
				 idx++;
			 }
			 else{
				 idx++;
				 parents++;
			 }
			 if(parents == wide){
				 break;
			 }
		 }
		 wide = idx-i;
		 i = idx;
		 lvl++;
	 }
	 cout<<lvl<<endl;
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