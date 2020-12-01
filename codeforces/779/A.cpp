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
	 vector<int> first(6,0);
	 vector<int> second(6,0);
	 int n;cin>>n;
	 for(int i=0;i<n;i++){
		 int x;cin>>x;
		 first[x]++;
	 }
	 for(int i=0;i<n;i++){
		 int x;cin>>x;
		 second[x]++;
	 }
	 int res=0;
	 for(int i=1;i<=5;i++){
		 if((first[i]+second[i])%2){
			 cout<<"-1"<<endl;
			 return;
		 }
		 else{
			 res += (abs(first[i]-second[i])/2);
		 }
	 }
	 cout<<res/2<<endl;
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