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
	 int a,b,n;cin>>a>>b>>n;
	 int res;
	 for(int i=0;i<1e6;i++){
		 int retained = b*(i+1);
		 //cout<<retained<<" ";
		 if(retained >= a){
			 bool flag = false;
			 int sec = n;
			 while(sec--){
				 retained -= a;
				 if(retained < 0){
					 flag = true;
					 break;
				 }
				 retained += b;
			 }
			 if(flag == false){
				 res = i;
				 break;
			 }
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