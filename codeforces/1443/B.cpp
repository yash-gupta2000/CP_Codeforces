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
	 int a,b;
	 cin>>a>>b;
	 string s;cin>>s;
	 int n = s.size();
	 int i;
	 for(i=0;i<n;i++){
		 if(s[i]=='1'){
			 break;
		 }
	 }
	 int res=0;
	 if(s[i]=='1'){
		 res += a;
	 }
	 int segsize=0;
	 for(;i<n;i++){
		 if(s[i]=='0'){
			 segsize++;
			 continue;
		 }
		 if(i>=1 && s[i-1]=='1'){
			 continue;
		 }
		 res += min(b*segsize,a);
		 segsize=0;
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