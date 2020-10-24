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
    int n;
    cin >> n;
    int i = 0, j = n - 1;
    int cnt = 2;
    int res[n][n];
    mem(res, 0);
    int row = 0;
    int curr = 0;
    if (n % 2 == 0)
    {
        //cout<<"t";
        while (row < n)
        {
            res[row][i] = 1;
            res[row][j] = 1;
            curr++;
            row++;
            if (curr % cnt == 0)
            {
                i++;
                j--;
            }
        }
    }
    else
    {
        while (row < n)
        {
            res[row][i] = 1;
            res[row][j] = 1;
            curr++;
            row++;
            if (curr % cnt == 0)
            {
                i++;
                j--;
            }
        }
        row = n - 1;
        if (n % 2)
        {
            res[0][(n/2)] = 1;
            res[1][(n/2)] = 1;
            for (int k = 0; k < n; k++)
            {
                res[row][k] = 0;
            }
            res[row][0] = 9;
            res[row][n-1] = 9;
            res[row][n / 2] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
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