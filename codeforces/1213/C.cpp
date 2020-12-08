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
	 int n,m;
	 cin>>n>>m;
	 int quotient = n/m;
	 int cycles = quotient/10;
	 int extra = quotient%10;
	 vector<int> digits;
	 int cnt=1;
	 int num = m;
	 while(cnt!=11){
		 num = m*cnt;
		 digits.pb(num%10);
		 cnt++;
	 }
	 int cycle_sum = 0;
	 for(auto it:digits){
		 cycle_sum += it;
	 }
	 int res = cycle_sum*cycles;
	 for(auto it:digits){
		 if(extra == 0){
			 break;
		 }
		 res += it;
		 extra--;
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