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
	 int n,k;
	 cin>>n>>k;
	 string s;cin>>s;
	 string t = s;
	 map<char,set<int>> m;
	 for(int i=0;i<s.size();i++){
		 m[s[i]].insert(i);
	 }
	//  for(auto it:m){
	// 	 cout<<it.first<<"->";
	// 	 for(auto x:it.second){
	// 		 cout<<x<<" ";
	// 	 }
	// 	 cout<<endl;
	//  }
	 for(int i=0;i<k;i++){
		 bool found = false;
		 for(char ch='a';ch<='z';ch++){
			 if(m[ch].size()!=0){
				 int idx = *(m[ch].begin());
				 //cout<<i<<" "<<idx<<" "<<ch<<endl;
				 t[idx] = '$';
				 found = true;
				 m[ch].erase(idx);
			 }
			 if(found){
				 break;
			 }
		 }
	 }
	 for(int i=0;i<t.size();i++){
		 if(t[i]=='$'){
			 continue;
		 }
		 cout<<t[i];
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