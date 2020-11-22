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
	 vector<int> cnt1(26,0);
	 vector<int> cnt2(26,0);
	 string s,t;
	 cin>>s>>t;
	 for(int i=0;i<n;i++){
		 cnt1[s[i]-'a']++;
	 }
	 for(int i=0;i<n;i++){
		 cnt2[t[i]-'a']++;
	 }
	//  for(int i=0;i<5;i++){
	// 	 cout<<cnt1[i]<<" "<<cnt2[i]<<endl;
	//  }
	//  cout<<endl;
	 bool flag = false;
	 for(int i=0;i<26;i++){
		 if(cnt1[i] == cnt2[i]){
			 continue;
		 }
		 else if(cnt1[i] < cnt2[i]){
			//  cout<<i<<" ran"<<endl;
			//  cout<<cnt1[i]<<" "<<cnt2[i]<<endl;
			 flag = true;
			 break;
		 }
		 else{
			 int freq = cnt1[i] - cnt2[i];
			 if(i+1<26){
			 	int x = freq/k;
			 	cnt1[i] -= x*k;
			 	cnt1[i+1] += x*k;
			 }
		 }
	 }
	 for(int i=0;i<26;i++){
		 if(cnt1[i]!=cnt2[i]){
			 flag = true;
			 break;
		 }
	 }
	 if(flag){
		 cout<<"NO"<<endl;
	 }
	 else{
		 cout<<"YES"<<endl;
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