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
//vector<int> a;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    stack<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            //cout<<i<<endl;
            s.push(a[i]);
            continue;
        }
        if (s.top().first < a[i].first)
        {
            //cout<<"ran1"<<endl;
            pair<int, int> val = a[i];
            while (!s.empty() && s.top().first < val.first)
            {
                s.pop();
                val.first++;
            }
            s.push(val);
        }
        else if (s.top().first > a[i].first)
        {
            //cout<<"ran2"<<endl;
            pair<int, int> val = s.top();
            s.pop();
            val.first++;
            while (!s.empty() && s.top().first < val.first)
            {
                //cout<<"LOOp"<<endl;
                s.pop();
                val.first++;
            }
            s.push(val);
        }
        else
        {
            //cout<<"ran3"<<endl;
            s.push(a[i]);
        }
    }
    //cout<<s.size()<<endl;
    if (s.size() == 1)
    {
        pair<int, int> res = s.top();
        cout << res.second + 1 << endl;
    }
    else
    {
        while (s.empty())
        {
            //cout<<'r';
            s.pop();
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.empty())
            {
                //cout<<i<<endl;
                s.push(a[i]);
                continue;
            }
            if (s.top().first < a[i].first)
            {
                //cout<<"ran1"<<endl;
                pair<int, int> val = a[i];
                while (!s.empty() && s.top().first < val.first)
                {
                    s.pop();
                    val.first++;
                }
                s.push(val);
            }
            else if (s.top().first > a[i].first)
            {
                //cout<<"ran2"<<endl;
                pair<int, int> val = s.top();
                s.pop();
                val.first++;
                while (!s.empty() && s.top().first < val.first)
                {
                    //cout<<"LOOp"<<endl;
                    s.pop();
                    val.first++;
                }
                s.push(val);
            }
            else
            {
                //cout<<"ran3"<<endl;
                s.push(a[i]);
            }
        }
        if(s.size()==1){
            pair<int,int> res = s.top();
            cout<<res.second+1<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
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