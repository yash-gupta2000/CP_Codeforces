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
	 vector<int> a(n*k);
	 for(int i=0;i<n*k;i++){
		 cin>>a[i];
	 }
	 int res = 0;
	 int jump = ceil(n/2);
	 int sum=0;
	 int cnt=0;
	 for(int i=n*k-jump-1;i>=0;i-=jump+1){
		 if(cnt>=k){
			 break;
		 }
		 //cout<<a[i]<<" ";
		 cnt++;
		 sum += a[i];
	 }
	 //cout<<endl;
	 cout<<sum<<endl;
	 //cout<<"res "<<res<<endl;
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