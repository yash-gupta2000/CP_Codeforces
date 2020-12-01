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
	 int n,k;cin>>n>>k;
	 string s;cin>>s;
	 int grashopper;
	 for(int i=0;i<n;i++){
		 if(s[i]=='G'){
			 grashopper = i;
			 break;
		 }
	 }
	 //cout<<grashopper<<endl;
	 bool flag = NULL;
	 for(int i=grashopper;i<n;i+=k){
		 if(s[i]=='#'){
			 flag = false;
			 break;
		 }
		 else if(s[i]=='T'){
			 flag = true;
			 break;
		 }
	 }
	 bool fflag = NULL;
	 //cout<<grashopper<<endl;
	 for(int i=grashopper;i>=0;i-=k){
		 if(i<0){
			 break;
		 }
		 if(s[i]=='#'){
			 fflag = false;
			 break;
		 }
		 else if(s[i]=='T'){
			 fflag = true;
			 break;
		 }
	 }
	 if(flag==true || fflag==true){
		 cout<<"YES"<<endl;
	 }
	 else{
		 cout<<"NO"<<endl;
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