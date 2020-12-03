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
	 int sum=0;
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 sum += a[i];
	 }
	 sort(all(a));
	 int res = sum;
	 for(int i=1;i<=100;i++){
		 for(int j=n-1;j>0;j--){
			 int ssum = sum;
			 if(a[j]%i==0){
				 int elmt = a[j]/i;
				 int decrement = a[j]-elmt;
				 int first = a[0]*i;
				 int increment = first-a[0];
				 ssum -= decrement;
				 ssum += increment;
				 res = min(res,ssum);
			 }
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