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
	 string s,t;cin>>s>>t;
	 string a = "abc";
	 vector<string> v;
	 do
	 {
		string aa,bb;
		for(int i=0;i<3;i++){
			//3length vali copy like abcabcabc
			for(int j=0;j<n;j++){
				aa += a[i];
			}
		}
		for(int i=0;i<3*n;i++){
			bb += a[i%3];
		}
		//cout<<aa<<endl;
		v.pb(aa);
		v.pb(bb);
	 } 
	 while (next_permutation(all(a)));
	//  for(auto it:v){
	// 	 cout<<it<<endl;
	//  }
	 for(int i=0;i<v.size();i++){
		 bool flag = false;
		 for(int j=0;j+1<v[i].size();j++){
			 if(v[i].substr(j,2) == s || v[i].substr(j,2) == t){
				 flag = true;
				 break;
			 }
		 }
		 if(flag == false){
			 cout<<"YES"<<endl;
			 for(int k=0;k<v[i].size();k++){
				 cout<<v[i][k];
			 }
			 return;
		 }
	 }
	 
	 
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