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
	 set<int> s;
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 s.insert(a[i]);
	 }
	 sort(all(a));
	 vector<int> res;
	 res.pb(a[0]);
	 int res_sze=1;
	 for(int j=0;j<n;j++){
		 int elmt = a[j];
		 for(int i=0;i<=30;i++){
			 vector<int> rres;
		 	 rres.pb(elmt);
		 	 int curr=1;
			 int pw = pow(2,i);
			 int left = elmt - pw;
			 int right = elmt + pw;
			 bool f = false,ff = false;
			 if(s.find(left)!=s.end()){
				 f = true;
			 }
			 if(s.find(right)!=s.end()){
				 ff = true;
			 }
			 if(f && ff){
				 rres.pb(left);
				 rres.pb(right);
				 curr += 2;
			 }
			 else if(!f && ff){
				 curr++;
				 rres.pb(right);
			 }
			 else if(f && !ff){
				 curr++;
				 rres.pb(left);
			 }

			 if(curr > res_sze){
				 res_sze = curr;
				 res = rres;
			 }
		 }
	 }
	 cout<<res_sze<<endl;
	 for(auto it:res){
		 cout<<it<<" ";
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