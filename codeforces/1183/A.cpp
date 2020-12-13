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
bool check(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	if(sum%4){
		return false;
	}
	return true;
}
void solve()
{
	 int n;cin>>n;
	 for(int i=n;i<1e5;i++){
		 if(check(i)){
			 cout<<i<<endl;
			 break;
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