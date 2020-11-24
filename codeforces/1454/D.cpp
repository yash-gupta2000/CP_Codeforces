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
	 if(n==2){
		 cout<<1<<endl;
		 cout<<2<<endl;
		 return;
	 }
	 if(n==3){
		 cout<<1<<endl;
		 cout<<3<<endl;
		 return;
	 }
	 vector<int> res;
	 int sze=0;
	 for(int i=2;i<=sqrt(n);i++){
		 vector<int> rres;
		 int x = n;
		 if(x%i==0 && (x/i)%i==0){
			 while(x%i==0 && (x/i)%i==0){
				 rres.pb(i);
				 x /= i;
			 }
		 }
		 if(x!=1){
			 rres.pb(x);
		 }
		 if(sze < rres.size()){
			 sze = rres.size();
			 res = rres;
		 }		 		 
	 }
	 cout<<sze<<endl;
	 for(auto it:res){
		 cout<<it<<" ";
	 }
	 cout<<endl;
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