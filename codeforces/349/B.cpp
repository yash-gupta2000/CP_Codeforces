
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

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first > p2.first)
    {
        return false;
    }
    else if (p1.first == p2.first)
    {
        return p1.second > p2.second;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(10);
    int a[11];
    for (int i = 0; i < 9; i++)
    {
        int x;
        cin >> x;
        v[i] = {x, i + 1};
        a[i + 1] = x;
    }
    sort(v.begin(), v.end(), comp);
    reverse(all(v));
    v.pop_back();
    reverse(all(v));
    // for (auto it : v)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    int left;
    vector<int> res;
    for (auto it : v)
    {
        int paint = it.first;
        int num = it.second;
        int x = n / paint;
        left = n % paint;
        while (x--)
        {
            res.pb(num);
        }
        n = left;
        if (n == 0)
        {
            break;
        }
    }
    if (res.size() == 0)
    {
        cout << "-1";
        return;
    }
    int len = res.size();
    for (int i = 0; i < len; i++)
    {
        int elmt = res[i];
        int val = a[elmt];
        left += val;
        int mx = elmt;
        int leftdummy;
        for (int j = 1; j <= 9; j++)
        {
            leftdummy = left;
            if (mx < j && a[j] <= leftdummy)
            {
                mx = j;
                leftdummy -= a[j];
            }
        }
        left -= a[mx];
        res[i]=mx;
        if (left == 0)
        {
            break;
        }
    }
    for (auto it : res)
    {
        cout << it;
    }
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