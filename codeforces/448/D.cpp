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
int n,m,k;
bool check(int mid){
	//cout<<"mid "<<mid<<" ";
	int cnt=0;
	for(int i=1;i<=min(n,mid);i++){
		cnt += min(mid/i,m);
	}
	//cout<<cnt<<endl;
	if(cnt >= k){
		return false;
	}
	return true;
}
void solve()
{
	cin>>n>>m>>k;
	//binsearch
	int l = 0, r = n*m;
	while(r>l+1){
		int mid = (l+r)/2;
		if(check(mid)){
			l = mid;
		}
		else{
			r = mid;
		}
	}
	//cout<<l<<" "<<r<<endl;
	cout<<r<<endl;
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