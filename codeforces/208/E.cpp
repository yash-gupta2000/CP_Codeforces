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
//#define mp make_pair
#define fir first
#define sec second
int n, m;
const int N = 1e5 + 5;
const int inf = 9e18 + 9;
const int mod = 1e9 + 7;
vector<vector<int>> graph(N), up(N, vector<int>(18));
// vector<int> graph[N];
// vector<vector<int>> up;
vector<int> tin(N), tout(N), level(N);
vector<bool> vis(N, 0);
map<int, vector<int>> mp;
int timer = 0;
/* 1st LCA Problem with Binary Lifing, LCA code from cp-algorithms*/
void dfs(int src, int p)
{
    tin[src] = ++timer;
    level[src] = level[p] + 1;
    mp[level[src]].pb(tin[src]);
    up[src][0] = p;
    vis[src] = 1;
    //Binary Lifting Recurrence Relation
    for (int i = 1; i < 18; i++)
    {
        up[src][i] = up[up[src][i - 1]][i - 1];
    }
    for (auto c : graph[src])
    {
        if (c == p)
            continue;
        dfs(c, src);
    }
    tout[src] = ++timer;
}

bool is_ancestor(int u, int v)
{
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int LCA(int u, int v)
{
    if (is_ancestor(u, v))
        return u;
    if (is_ancestor(v, u))
        return v;

    for (int i = 17; i >= 0; i--)
    {
        if (!is_ancestor(up[u][i], v))
            u = up[u][i];
    }
    return up[u][0];
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        graph[i].pb(num);
        graph[num].pb(i);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i, 0);
        }
    }

    cin >> m;
    while (m--)
    {
        int v, p;
        cin >> v >> p;
        int par = v;
        //Binary Lifting
        for (int i = 17; i >= 0; i--)
        {
            if (p & (1ll << i))
            {
                par = up[par][i];//Climbing up the 2^i, Binary Lifting(Gourav Sen)
            }
        }
        int cnt = 0;
        if (par == 0)
        {
            cout << 0 << ' ';
            continue;
        }
        //Gives nodes from discovery time of a subtree to finish time of subtree.
        cnt = lower_bound(mp[level[v]].begin(), mp[level[v]].end(), tout[par]) - lower_bound(mp[level[v]].begin(), mp[level[v]].end(), tin[par]);
        cout << cnt - 1 << ' ';
    }
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