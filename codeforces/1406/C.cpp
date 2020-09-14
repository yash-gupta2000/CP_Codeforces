
//It doesn't matter how slow you go, Unless you don't stop.
#include <bits/stdc++.h>
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
const int N = 2 * 1e5 + 10;
vector<LL> adj[N];
vector<LL> cn;
LL sz[N];
int n;
void dfs(LL root, LL p = -1)
{
    sz[root] = 1;
    bool is_centroid = true;
    for (auto i : adj[root])
    {
        if (p != i)
        {
            dfs(i, root);
            sz[root] += sz[i];
            if (sz[i] > n / 2)
                is_centroid = false;
        }
    }
    if (n - sz[root] > n / 2)
        is_centroid = false;
    if (is_centroid)
        cn.push_back(root);
}
void solve()
{
    cin >> n;
    for(int i=1;i<n+1;i++){
        sz[i]= 0;
        adj[i].clear();
    } 
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    cn.clear();
    dfs(1);
    if (cn.size() == 1)
    {
        cout << cn[0] << " " << adj[cn[0]][0] << endl;
        cout << cn[0] << " " << adj[cn[0]][0] << endl;
    }
    else
    {
        LL itr;
        for (auto i : adj[cn[0]])
        {
            if (i != cn[1])
            {
                itr = i;
                break;
            }
        }

        cout << itr << " " << cn[0] << endl;
        cout << itr << " " << cn[1] << endl;
    }
}

int main()
{
    DANGER;
    ofstream out("output.txt");

    auto start = chrono::high_resolution_clock::now();

    LL t = 1;
    cin >> t;
    rep(test, 1, t)
    {
        solve();
    }

    auto stop = chrono::high_resolution_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    // cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}