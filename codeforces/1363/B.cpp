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
	 int res=0;
	 string s;cin>>s;
	 int zero=0,one=0;
	 for(int i=0;i<s.size();i++){
		 if(s[i] == '0'){
			 zero++;
		 }
		 else{
			 one++;
		 }
	 }
	 res = min(zero,one);
	 //ab partition of 000111 or 111000...
	 int flipzero=0,flipone=0;
	 for(int i=0;i<s.size();i++){
		 if(s[i]=='1'){
			 one--;
			 flipone++;
		 }
		 else{
			 zero--;
			 flipzero++;
		 }
		 res = min(res,zero+flipone);
		 res = min(res,one+flipzero);
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