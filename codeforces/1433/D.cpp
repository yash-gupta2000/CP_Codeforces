/*
author: Yash Gupta
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
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
const int inf = 9e18 + 9;
const int mod = 1e9 + 7;
vector<int> a;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != a[0])
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "NO" << endl;
        return;
    }
    vector<pair<int, int>> roads;
    bool vis[n];
    mem(vis,false);
    vis[0] = true;
    for (int j = 1; j < n; j++)
    {
        if (vis[j])
        {
            continue;
        }
        if (a[0] != a[j])
        {
            roads.pb(mp(1, j + 1));
            vis[j] = true;
            //vis[i] = true;
        }
    }
    int peeko = roads[0].second;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            roads.pb(mp(peeko,i+1));
        }
    }
    cout<<"YES"<<endl;
    for(auto it:roads){
        cout<<it.first<<" "<<it.second<<endl;
    }
}


int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}