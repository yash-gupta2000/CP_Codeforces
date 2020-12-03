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
const int N = 1e7 + 5;
const int inf = 9e18 + 9;
const int mod = 1e9+7;
vector<int> a;

void solve()
{
	 int n;cin>>n;
	 vector<int> a(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 int res=0;
	 vector<int> odd(N,0);//odd prefix stored
	 vector<int> even(N,0);//even prefix stored
	 int pref = 0;
	 odd[0] = 1;
	 for(int i=0;i<n;i++){
		 pref ^= a[i];
		 if(i%2){
			 res += odd[pref];//pehle res m add
			 odd[pref] += 1;
		 }
		 else{
			 res += even[pref];
			 even[pref] += 1;
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