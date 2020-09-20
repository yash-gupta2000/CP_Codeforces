//It's really tough
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
const ll inf = 9e18 + 9;
const int mod = 1e9 + 7;
ll res;
int vis[505][505], i, j;
char v[505][505];
int n, m, ans = 0, x, y, t, k;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
void dfs(int r, int c)
{

    vis[r][c] = 1;
    t++;
    if (t == ans - k)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (!vis[i][j] && v[i][j] == '.')
                    cout << "X";
                else
                    cout << v[i][j];
            }
            cout << endl;
        }
        exit(0);
    }
    for (int i = 0; i < 4; i++)
    {
        x = r + dx[i];
        y = c + dy[i];
        if (x < 0 || y < 0)
            continue;
        if (x >= n || y >= m)
            continue;

        if (v[x][y] == '.' && !vis[x][y])
        {
            dfs(x, y);
        }
    }
}

void solve()
{
    cin >> n >> m >> k;
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == '.')
                ans++;
        }
    }
    int cc;
    if (k)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cc = 0;
                if (!vis[i][j] && v[i][j] == '.')
                {
                    dfs(i, j);
                    cc = 1;
                    break;
                }
            }
            if (cc)
                break;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
}

int main()
{
    IOS;
    ll t = 1;
    // cin>>t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}
