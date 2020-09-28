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

void solve()
{
    int n, x;
    cin >> n >> x;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        vector<int> a[100];
        for (int j = 0; j < 2; j++)
        {
            int iter=2;
            while(iter!=0)
            {
                ll x;
                cin >> x;
                a[j].pb(x);
                iter--;
            }
        }

        if (a[1][0] == a[0][1])
        {
            flag = true;
        }
    }

    if (x % 2 || !flag)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        return;
    }
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