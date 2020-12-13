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
	 vector<int> a(n);
	 map<int,int> m;
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 m[a[i]]++;
	 }
	 multimap<int,int,greater<int>> mm;
	 for(auto it:m){
		 mm.insert({it.second,it.first});
	 }
	 int res=0;
	 int prev=-1;
	//  for(auto it:mm){
	// 	 cout<<it.first<<" "<<it.second<<endl;
	//  }
	 for(auto it:mm){
		 if(prev==0){
			 break;
		 }
		 if(prev==-1){
			 //cout<<"debug"<<endl;
			 res += it.first;
			 prev = it.first;
		 }
		 else{
			 if(it.first < prev){
				 res += it.first;
				 prev = it.first;
			 }
			 else{
				 res += prev-1;
				 prev--;
			 }
		 }
		 //cout<<res<<" "<<prev<<endl;
	 }
	 cout<<res<<endl;
	 
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