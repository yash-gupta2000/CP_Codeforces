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
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 int curr=0; int res=n-1;
	 for(int i=0;i<n;i++){
		 curr += a[i];
		 int ops=1;
		 int curr1=0;
		 bool flag = false;
		 for(int j=i+1;j<n;j++){
			 curr1 += a[j];
			 if(curr1 > curr){
				 flag = true;
				 break;
			 }
			 if(curr1 == curr){
				 ops++;
				 curr1 = 0;
			 }
		 }
		 if(curr1){
			flag = true;
		 }
		 if(!flag){
			 res=  min(res,n-ops);
		 }
		
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