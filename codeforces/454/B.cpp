
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
    int n;
    cin >> n;
    int a[n], cnt = 0, s = 0;
    for (int x = 0; x < n; x++)
    {
        cin >> a[x];
        if (a[x] < a[x - 1] && x)
            cnt++, s = x;
    }
    //cout<<s<<endl;
    if (!cnt)
        cout << "0";
    else if (cnt == 1 && a[0] >= a[n - 1])
        cout << n - s;
    else
        cout << "-1";
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