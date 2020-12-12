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
void solve()
{
	 int n;cin>>n;
	 vector<int> a;
	 for(int i=0;i<40;i++){
		 a.pb(pow(3,i));
	 }
	 if(binary_search(all(a),n)){
		 cout<<n<<endl;
		 return;
	 }
	 else{
		 //minimum combination with just greater sum
		 int sum = 0;int idx = 0;
		 for(int i=0;i<a.size();i++){
			 if(sum >= n){
				 break;
			 }
			 sum += a[i];
			 idx = i;
		 }
		 for(int i=idx;i>=0;i--){
			 if((sum-a[i])>=n){
				 sum -= a[i];
			 }
			 else{
				 continue;
			 }
		 }
		 cout<<sum<<endl;
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