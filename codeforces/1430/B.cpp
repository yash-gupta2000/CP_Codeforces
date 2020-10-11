/*
author: Yash Gupta
*/
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

void solve()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    ll res = 0;
    if (n == 1)
    {
        cout << a[0] << endl;
        return;
    }
    ll mx = a[n - 1];
    ll sum = 0;
    for (int i = n - 2; i >= 0,k>=1; i--)
    {
        k--;
        sum += a[i];
    }
    cout<<mx+sum<<endl;
}

int main()
{
    IOS;
    ll t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}