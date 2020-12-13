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
	 set<string> x;
	 string s;cin>>s;
	 queue<string> q;
	 q.push(s);
	 x.insert(s);
	 int res=0;
	 //sasta bfs
	 while(!q.empty() && x.size() < k){
		 string curr = q.front();
		 q.pop();
		 for(int i=0;i<curr.size();i++){
			 string subseq = curr;
			 subseq.erase(i,1);
			 if(x.count(subseq) == 0 && x.size() + 1 <= k){
				 q.push(subseq);
				 x.insert(subseq);
				 res += (n-subseq.size());
			 }
		 }
	 }
	 if(x.size() < k){
		 cout<<"-1"<<endl;
		 return;
	 }
	 cout<<res<<endl;
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