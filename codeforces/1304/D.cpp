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
	 int curr = n,prev=0;
	 string s;cin>>s;
	 vector<int> lislarge(n);
	 vector<int> lismall(n);
	 for(int i=0;i<n;i++){
		 if(s[i] == '>' || (i==(n-1))){//(n-1) case not sure, observations se dekha h
			 for(int j=i;j>=prev;j--){
				 lislarge[j] = curr;//last occurence tak dal do
				 curr--;
			 }
			 prev = i+1;
		 }
		 //cout<<curr<<endl;
	 }
	 for(int i=0;i<n;i++){
		 cout<<lislarge[i]<<" ";
	 }
	 cout<<endl;
	 curr = 1;
	 prev = 0;//reset
	 //opposite operations to large one, copy-paste
	 for(int i=0;i<n;i++){
		 if(s[i] == '<' || (i==(n-1))){//(n-1) case not sure
			 for(int j=i;j>=prev;j--){
				 lismall[j] = curr;//last occurence tak dal do
				 curr++;
			 }
			 prev = i+1;
		 }
		 //cout<<curr<<endl;
	 }
	 for(int i=0;i<n;i++){
		 cout<<lismall[i]<<" ";
	 }
	 cout<<endl;

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