//It's a long way ahead.
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
//ll res;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int ans = k;
    ll size = 2;
    if (ans == 1)
    {
        size = inf;
    }
    vector<int> res[k + 1];
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            for (int j = 1; j <= m; j++)
            {
                if (size)
                {
                    res[ans].pb(i);
                    res[ans].pb(j);
                    size--;
                    if (size == 0)
                    {
                        ans--;
                        if (ans == 1)
                        {
                            size = inf;
                        }
                        else
                        {
                            size = 2;
                        }
                    }
                }
            }
        }
        else
        {
            for (int j = m; j >= 1; j--)
            {
                if (size)
                {
                    res[ans].pb(i);
                    res[ans].pb(j);
                    size--;
                    if (size == 0)
                    {
                        ans--;
                        if (ans == 1)
                        {
                            size = inf;
                        }
                        else
                        {
                            size = 2;
                        }
                    }
                }
            }
        }
    }
    for(int i=1;i<=k;i++){
        cout<<res[i].size()/2<<" ";
        for(auto it:res[i]){
            cout<<it<<" ";
        }
        cout<<endl;
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