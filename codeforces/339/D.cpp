/*
author: Yash Gupta
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 4e5 + 5;
const int inf = 9e18 + 9;
const int mod = 1e9+7;
vector<int> a(N);
int st[N];
void build(int node, int L, int R, int parity)
{
	if(L==R)
	{
		st[node]=a[L];
		return;
	}
	int M=(L+R) >> 1;
	build(2*node,L,M,parity^1);
	build(2*node+1,M+1,R,parity^1);
	if(parity)
	{
		st[node]=st[2*node] | st[2*node+1];
	}
	else
	{
		st[node]=st[2*node] ^ st[2*node+1];
	}
}
 
void update(int node, int L, int R, int pos, int newval, int parity)
{
	if(L==R)
	{
		st[node]=newval;
		return;
	}
	int M=(L+R)>>1;
	if(pos<=M)
		update(2*node,L,M,pos,newval,parity^1);
	else
		update(2*node+1,M+1,R,pos,newval,parity^1);
	if(parity)
	{
		st[node]=st[2*node] | st[2*node+1];
	}
	else
	{
		st[node]=st[2*node] ^ st[2*node+1];
	}
}
void solve()
{
	int n,m;
	 cin>>n>>m;
	int sz=1<<n;
	for(int i=0;i<sz;i++)
	{
		cin>>a[i];		
	}
	build(1, 0, sz-1, n&1);
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		a--;
		update(1, 0, sz-1, a, b, n&1);
		cout<<st[1]<<endl;
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