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
	 string s;cin>>s;
	 string test = "2020";
	 //end m miljaye
	 if((s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0') || (s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0') || (s[0]=='2' && s[1]=='0' && s[2] == '2' && s[n-1]=='0')){
		 cout<<"YES"<<endl;
		 return;
	 }
	 else{
		 if(s.substr(0,4)==test || s.substr(n-4,4)==test){
			 cout<<"YES"<<endl;
			 return;
		 }
		 cout<<"NO"<<endl;
	 }
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