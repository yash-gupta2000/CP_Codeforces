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
bool check(int m,string s,string t){
	for(int i=0;i<m;i++){
		s[a[i]] = '.';
	}
	int i=0,j=0;
	while(i<s.size()){
		if(s[i]==t[j]){
			j++;
		}
		i++;
	}
	if(j==t.size()){
		return true;
	}
	return false;
}
void solve()
{
	 string s,t;cin>>s>>t;
	 int n = s.size();
	 a.resize(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 a[i]--;
	 }
	 int l = 0,r = n;
	 while(r > l+1){
		 int m = (l+r)/2;
		 if(check(m,s,t)){
			 l = m;
		 }
		 else{
			 r = m;
		 }
	 }
	 cout<<l<<endl;
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