/*
author: Yash Gupta
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define IOS                  \
	ios::sync_with_stdio(0); \
	cin.tie(0);              \
	cout.tie(0);
#define endl "\n"
#define mem(x, y) memset(x, y, sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e5 + 5;
const int inf = 9e18 + 9;
const int mod = 1e9 + 7;
vector<bool> vis(N + 1, false);
vector<int> res(N + 1, -1);
vector<int> adj[N + 1];
vector<pair<int,int>> edges;
void dfs(int node, bool flag)
{
	//vis[node] = true;
	if(flag == false){
		res[node] = 0;
	}
	else{
		res[node] = 1;
	}
	for (auto it : adj[node])
	{
		//vis[it] = true;
		if (res[it]==-1)
		{
			dfs(it, flag^1);
		}
		else
		{
			if(res[it]==res[node]){
				cout<<"NO"<<endl;
				exit(0);
			}
		}
	}
}
void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> indeg[N];
	vector<int> outdeg[N];
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
		edges.pb({x,y});
	}
	dfs(1, false);
	cout << "YES" << endl;
	for (int i = 0; i < m; i++)
	{
		if(res[edges[i].first] < res[edges[i].second]){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	cout << endl;
}

int32_t main()
{
	IOS;
	int t = 1;
	// cin>>t;
	for (int i = 1; i <= t; i++)
	{
		solve();
	}
}