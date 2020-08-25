
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
    string s;
    cin >> s;
    int n = s.length();
    int x, i;
    cin >> x;
    string ans = "", a = "";
    for (i = 0; i < n; i++)
        ans += '1';
    for (i = 0; i < n; i++)
        a += '0';
    for (i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if ((i - x) >= 0)
                ans[i - x] = '0';
            if ((i + x) < n)
                ans[i + x] = '0';
        }
    }
    for (i = 0; i < n; i++)
    {
        if (i + x < n)
        {
            if (ans[i + x] == '1')
                a[i] = '1';
        }
        if (i - x >= 0)
        {
            if (ans[i - x] == '1')
                a[i] = '1';
        }
    }
    if (a != s)
        cout << -1 << endl;
    else
        cout << ans << endl;
}

int main()
{
    DANGER;
    ofstream out("output.txt");

    auto start = chrono::high_resolution_clock::now();

    LL t = 1;
    cin >> t;
    rep(test, 1, t)
    {
        solve();
    }

    auto stop = chrono::high_resolution_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    // cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}