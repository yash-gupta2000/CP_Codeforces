
//It doesn't matter how slow you go, Unless you don't stop.
#include <iostream>
#include <algorithm>
#include <bitset>

#include <cmath>
#include <cstring>
#include <climits>

#include <deque>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

#include <fstream>
#include <chrono>
using namespace std;

typedef long long LL;
typedef pair<LL, LL> p64;
typedef vector<LL> v64;
typedef map<LL, LL> mp64;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, s, e) for (long long i = s; i <= e; i++)
#define brep(i, s, e) for (long long i = s; i >= e; i--)
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof(x))
#define DANGER                        \
	std::ios::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
const int N = 2e6 + 123;
vector<int> adj[N];
vector<pair<int, int>> degree;
bool vis[N];
vector<pair<int,int>> res;
void bfs(int node){
	queue<int> q;
	q.push(node);
	vis[node] = 1;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(auto i: adj[node]){
			if(!vis[i]){
				q.push(i);
				vis[i] = 1;
				res.pb({node,i});
			}
		}
	}
}
void solve()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for (int i = 1; i <= n; i++)
	{
		int size = adj[i].size();
		degree.pb({size, i});
	}
	//  for(auto it:degree){
	// 	 cout<<it.first<<" "<<it.second<<endl;
	//  }
	sort(degree.begin(), degree.end(), greater<pair<int, int>>());
	bfs(degree.front().second);
	for (auto it : res)
	{
		cout << it.first << " " << it.second << endl;
	}
}

int main()
{
	DANGER;
	ofstream out("output.txt");

	auto start = chrono::high_resolution_clock::now();

	LL t = 1;
	// cin>>t;
	rep(test, 1, t)
	{
		solve();
	}

	auto stop = chrono::high_resolution_clock::now();
	// auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
	// cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}