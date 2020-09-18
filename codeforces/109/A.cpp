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
void solve()
{
    int n;
    cin >> n;
    for (int c7 = n / 7; c7 >= 0; c7--)
    {
        if ((n - c7 * 7) % 4 == 0)
        {
            int c4 = (n - c7 * 7) / 4;
            for (int i = 0; i < c4; i++){
                cout<<"4";
            }
            for (int i = 0; i < c7; i++){
                cout<<"7";
            }
            cout<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
    return;
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