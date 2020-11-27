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
	 int a,b,x;
	 cin>>a>>b>>x;
	 string res = "";
	 int baari;
	 if(a>=b){
		 baari = 0;
	 }
	 else{
		 baari = 1;
	 }
	 while(x){
		 if(x==1){//yeh base case h
			 if(baari){
				 while(b){
					 res += '1';
					 b--;
				 }
				 while(a){
					 res += '0';
					 a--;
				 }
			 }
			 else{
				 while(a){
					 res += '0';
					 a--;
				 }
				 while(b){
					 res += '1';
					 b--;
				 }
			 }
		 }
		 else{
			 cout<<baari;
			 if(baari){
				 b--;
				 baari ^= 1;
			 }
			 else{
				 a--;
				 baari ^= 1;
			 }
		 }
		 x--;
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