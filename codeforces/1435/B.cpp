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
vector<int> a;

void solve()
{
    int n, m;
    cin >> n >> m;
    int row[n][m];
    int col[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> row[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> col[i][j];
        }
    }
    int searches = 0;
    while (searches != n)
    {
        int search = col[0][searches];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (row[i][j] == search)
                {
                    for (int k = 0; k < m; k++)
                    {
                        cout << row[i][k] << " ";
                    }
                    cout<<endl;
                }
            }
        }
        searches++;
    }
}

int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}