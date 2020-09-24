//Currently in Spain, But S is silent :|
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
vector<int> a;
void solve()
{
    int n;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 50; j >= 0; j--)
        {
            if ((a[i] & (1ll << j)))
            {
                m[j]++;
                break;
            }
        }
    }

    for (auto it : m)
    {
        ans += (it.second * (it.second - 1) / 2);
    }
    cout << ans << endl;
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