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
	 int n,queries;cin>>n>>queries;
	 string s;cin>>s;
	 while(queries--){
		 int l,r;cin>>l>>r;
		 l--,r--;
		 int len = r-l+1;
		 string t = s.substr(l,len);
		 char f = t[0];char lst = t[len-1];
		 bool flag = false;
		 for(int i=0;i<l;i++){
			 if(s[i]==f){
				 flag = true;
				 break;
			 }
		 }
		 //cout<<r<<endl;
		 for(int i=r+1;i<s.size();i++){
			 if(s[i] == lst){
				 flag = true;
				 break;
			 }
		 }
		 if(flag){
			 cout<<"YES"<<endl;
		 }
		 else{
			 cout<<"NO"<<endl;
		 }
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