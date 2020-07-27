
//It doesn't matter how slow you go, Unless you don't stop.
#include <iostream>
#include <algorithm>
#include <bitset>

#include <cmath>
#include <cstring>
#include <climits>

#include <deque>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

#include <fstream>
#include <chrono>
using namespace std;

typedef long long LL;
typedef pair<LL, LL> p64;
typedef vector<LL> v64;
typedef map<LL, LL> mp64;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, s, e) for (long long i = s; i <= e; i++)
#define brep(i, s, e) for (long long i = s; i >= e; i--)
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof(x))
#define DANGER                        \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    LL n, m;
    cin >> n >> m;
    if ((n - m > 1) || (m > 2 * n + 2))
    {
        cout << -1;
        return;
    }
    while (m > 0 && n > 0)
    {
        if (m > n)
        {
            cout << 1;
            m--;
            if (m)
            {
                cout << 1;
                m--;
            }
            if (n)
            {
                cout << 0;
                n--;
            }
        }
        else if (n == m)
        {
            if (n)
            {
                cout << 10;
                n--;
                m--;
            }
        }
        else
        {
            cout << 0;
            n--;
        }
    }
    while (m--)
        cout << 1;
}
int main()
{
    DANGER;
    ofstream out("output.txt");

    auto start = chrono::high_resolution_clock::now();

    LL t = 1;
    // cin>>t;
    rep(test, 1, t)
    {
        solve();
    }

    auto stop = chrono::high_resolution_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    // cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}