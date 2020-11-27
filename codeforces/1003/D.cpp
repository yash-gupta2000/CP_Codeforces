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
	 int n,queries;
	 cin>>n>>queries;
	 vector<int> a(n);
	 map<int,int> freq;
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 freq[a[i]]++;
	 }
	 while(queries--){
		 int x;cin>>x;
		 int res=0;
		 for(int i=30;i>=0;i--){
			 int curr = pow(2,i);
			 //cout<<curr<<" ";
			 if(freq[curr]){
				 //cout<<"ran"<<endl;
				 int t;
				 if(freq[curr] < (x/curr)){
					 t = freq[curr];
				 }
				 else{
					 t = x/curr;
				 }
				 x -= t*curr;
				 res += t;
			 }
			 //cout<<endl;
			 if(!x){
				 break;
			 }
		 }
		 if(!x){
			 cout<<res<<endl;
		 }
		 else{
			 cout<<"-1"<<endl;
		 }
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