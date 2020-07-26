
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

typedef long long ll;

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
    ll n;
    cin>>n;
    ll a[n];
    rep(i,0,n-1)
    {
        cin>>a[i];
    }
    ll m;
    cin>>m;
    ll b[m];
    rep(i,0,m-1)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    ll s1=3*n;
    ll s2=3*m;
    rep(i,0,m-1)
    {
        ll sum1=0;
        ll sum2=0;
        ll f=upper_bound(a,a+n,b[i])-a;
        sum2=(m-i-1)*3+(i+1)*2;
        sum1=(n-f)*3+f*2;
        if(s1-s2<sum1-sum2)
        {
            s1=sum1;
            s2=sum2;
        }
    }
    cout<<s1<<":"<<s2;
    //return 0;
}

int main()
{
    DANGER;
    ofstream out("output.txt");

    auto start = chrono::high_resolution_clock::now();

    ll t = 1;
    // cin>>t;
    rep(test, 1, t)
    {
        solve();
    }

    auto stop = chrono::high_resolution_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    // cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}