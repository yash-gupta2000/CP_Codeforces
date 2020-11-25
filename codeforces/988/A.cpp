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
	 int n;cin>>n;int k;cin>>k;
	 set<int> s;
	 map<int,int> idx;
	 for(int i=0;i<n;i++){
		 int x;cin>>x;
		 s.insert(x);
		 idx[x] = i+1;
	 }
	 if(s.size() < k){
		 cout<<"NO"<<endl;
	 }
	 else{
		 cout<<"YES"<<endl;
		 int cnt=0;
		 for(auto it:s){
			 if(cnt==k){
				 break;
			 }
			 cout<<idx[it]<<" ";
			 cnt++;
		 }
		 cout<<endl;
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