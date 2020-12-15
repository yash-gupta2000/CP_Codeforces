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
	 int n,special;cin>>n>>special;
	 vector<int> degree(n+1,0);
	 for(int i=0;i<n-1;i++){
		 int u,v;cin>>u>>v;
		 degree[u]++;
		 degree[v]++;
	 }
	 
	 //Ayush jeetega if <=1
	 if(degree[special] <= 1){
		 cout<<"Ayush"<<endl;
	 }
	 else{
		 if(n%2){
			 cout<<"Ashish"<<endl;
		 }
		 else{
			 cout<<"Ayush"<<endl;
		 }
	 }

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