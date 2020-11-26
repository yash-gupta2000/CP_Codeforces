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
	 int n,m;cin>>n>>m;
	 int div = n/m;
	 vector<int> a(n);
	 vector<vector<int>> rem(m);
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 rem[a[i]%m].pb(i);
	 }
	 int res=0;
	 vector<pair<int,int>> deficit;
	 for(int i=0;i<2*m;i++){
		 int curr = i%m;
		 while(rem[curr].size() > div){
			 deficit.pb({rem[curr].back(),i});
			 rem[curr].pop_back();
		 }
		 while(rem[curr].size() < div && deficit.size()>0){
			 int elmt = deficit.back().first;
			 int idx = deficit.back().second;
			 deficit.pop_back();
			 rem[curr].pb(elmt);
			 a[elmt] += i-idx;
			 res += i-idx;
		 }
	 }
	 cout << res << endl;
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
	 

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