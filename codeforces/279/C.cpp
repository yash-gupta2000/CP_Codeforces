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
    int n, m;
    cin >> n >> m;
    vector<int> a(N);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> prefix(N);//same count for decreasing sequence
    vector<int> suffix(N);//same val for increasing  sequence
    prefix[0] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] <= a[i - 1])
        {
            prefix[i] = prefix[i - 1];
        }
        else
        {
            prefix[i] = i;
        }
    }
    // for (int i = 1; i <= n; ++i)
    // {
    //     printf("%d ", prefix[i]);
    // }
    // cout << endl;
    suffix[n] = n;
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] <= a[i + 1])
        {
            suffix[i] = suffix[i + 1];
        }
        else
        {
            suffix[i] = i;
        }
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        if (suffix[l] >= prefix[r])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
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