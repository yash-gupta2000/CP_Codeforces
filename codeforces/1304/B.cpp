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
string sastafunction(string s){
	reverse(all(s));
	return s;
}
void solve()
{
	 int n,m;cin>>n>>m;
	 vector<string> a(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 string end = "";
	 string beechwala = "";
	 for(int i=0;i<n;i++){
		 string curr = a[i];
		 string rev = sastafunction(curr);
		 if(curr == rev){
			 beechwala = curr;
		 }
		 else{
			 for(int j=i+1;j<n;j++){
				 if(rev == a[j]){
					 end += a[i];
				 }
			 }
		 }
	 }
	 int len = 2*end.size() + beechwala.size();
	 cout<<len<<endl;
	 cout<<end+beechwala+sastafunction(end)<<endl;


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