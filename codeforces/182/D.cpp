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

int check(string& a,string& b,int len){
	if(a.size()%len){
		return 0;
	}
	if(b.size()%len){
		return 0;
	}
	for(int i=0;i<a.size();i++){
		if(a[i] != a[i%len]){
			return 0;
		}
	}
	for(int i=0;i<b.size();i++){
		if(b[i] != a[i%len]){
			return 0;
		}
	}
	return 1;
}
void solve()
{
	 string s,t;cin>>s>>t;
	 int res=0;
	 for(int i=1;i<=min(s.size(),t.size());i++){
		 res += check(s,t,i);
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