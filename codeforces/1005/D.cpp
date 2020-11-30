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
	 string s;cin>>s;
	 int n = s.size();
	 int sum=0;
	 int curr;
	 int cnt=0;
	 int res=0;
	 for(int i=0;i<n;i++){
		 curr = s[i]-'0';
		 sum += curr;
		 cnt++;
		 if(sum%3==0){
			 res++;
			 cnt=0;
			 sum=0;
		 }
		 else if(curr%3==0){
			 res++;
			 cnt=0;
			 sum=0;
		 }
		 else if(cnt==3){
			 res++;
			 cnt=0;
			 sum=0;
		 }
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