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
const int MOD = 1e9 + 7;
vector<int> a;
int fact[N], invfact[N];

int pow(int a, int b, int m)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % m;
        b /= 2;
        a = (a * a) % m;
    }
    return ans;
}

int modinv(int k)
{
    return pow(k, MOD - 2, MOD);
}

void precompute()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] %= MOD;
    }
    invfact[N - 1] = modinv(fact[N - 1]);
    for (int i = N - 2; i >= 0; i--)
    {
        invfact[i] = invfact[i + 1] * (i + 1);
        invfact[i] %= MOD;
    }
}

int nCr(int x, int y)
{
    if (y > x)
        return 0;
    int num = fact[x];
    num *= invfact[y];
    num %= MOD;
    num *= invfact[x - y];
    num %= MOD;
    return num;
}

int mul(int a, int b)
{
    return (a % MOD * b % MOD) % MOD;
}

void solve()
{
    precompute();
    int n, x, pos;
    cin >> n >> x >> pos;
    //BS
    int smaller = 0, larger = 0, rest = 0;
    int l = 0, r = n;
    while (r > l)
    {
        int mid = (l + r) / 2;
        if (mid < pos)
        {
            smaller++;
            l = mid + 1;
        }
        else if (mid > pos)
        {
            larger++;
            r = mid;
        }
        else if (pos == mid)
        {
            l = mid + 1;
        }
    }
    //cout<<smaller<<" "<<larger<<endl;
    int ans1 = mul(nCr(x - 1, smaller), fact[smaller]);
    int ans2 = mul(nCr(n - x, larger), fact[larger]);
    int res = mul(mul(ans1, ans2), fact[n - (smaller + larger+1)]);

    cout << res;
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