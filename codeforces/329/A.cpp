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
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    //check for -1
    bool flag = true;
    bool row_flag = false;
    bool col_flag = false;
    for (int i = 0; i < n; i++)
    {
        flag = true;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '.')
            {
                //cout<<"ran"<<endl;
                flag = false;
            }
        }
        if (flag == true)
        {
            row_flag = true;
            break;
        }
    }
    //cout<<row_flag<<endl;
    for (int i = 0; i < n; i++)
    {
        flag = true;
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] == '.')
            {
                flag = false;
            }
        }
        if (flag == true)
        {
            col_flag = true;
            break;
        }
    }
    if (col_flag && row_flag)
    {
        cout << "-1" << endl;
        return;
    }
    //Answer Exists
    if (col_flag)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == '.')
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    break;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j][i] == '.')
                {
                    cout << j + 1 << " " << i + 1 << endl;
                    break;
                }
            }
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