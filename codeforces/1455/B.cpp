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
void init(){
	for(int i=1;i<100000;i++){
		a.pb((i*(i+1))/2);
	}
}
void solve()
{
	 int n;cin>>n;
	 int idx = lower_bound(all(a),n)-a.begin();
	 int val = a[idx];
	 idx++;
	 if(val!=n){
		 if((val-n)==1){
			 cout<<idx+1<<endl;
			 return;
		 }
	 }
	 cout<<idx<<endl;
}
 
int32_t main()
{
	init();
	IOS;int t = 1;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		solve();
	}
}