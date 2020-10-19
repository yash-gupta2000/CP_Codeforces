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
    int n, x;
    cin >> n >> x;
    a.resize(n);
    bool flag = false;
    bool ff = false;
    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        diff += (a[i] - x);
        if (a[i] != x)
        {
            flag = true;
        }
        if (a[i] == x)
        {
            ff = true;
        }
    }
    if (!flag)
    {
        cout << 0 << endl;
        return;
    }
    if (!diff)
    {
        cout << 1 << endl;
        return;
    }
    if (ff)
    {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
    a.clear();
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