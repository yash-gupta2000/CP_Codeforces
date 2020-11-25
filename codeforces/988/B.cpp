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
bool cmp(string a,string b){
	if(a.size() > b.size()){
		return false;
	}
	else if(a.size()==b.size()){
		return a>b;
	}
	else{
		return true;
	}
}
void solve()
{
	 int n;cin>>n;
	 vector<string> a(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 sort(all(a),cmp);
	 string prev = a[0];
	 int len = prev.size();
	 for(int i=1;i<n;i++){
		 bool flag = false;
		 string now = a[i];
		 for(int j=0;j<now.size();j++){
			 if(now.substr(j,len) == prev){
				 flag = true;
				 break;
			 }
		 }
		 //cout<<i<<" "<<now<<" "<<prev<<endl;
		 prev = a[i];
		 len = prev.size();
		 if(flag == false){
			 //cout<<i<<endl;
			 cout<<"NO"<<endl;
			 return;
		 }
	 }
	 cout<<"YES"<<endl;
	 for(auto it:a){
		 cout<<it<<endl;
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