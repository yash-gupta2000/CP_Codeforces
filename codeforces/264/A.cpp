//Currently in Spain, But S is silent :|
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e6 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll ans[N];

void solve()
{
     string s;
    cin >> s;
 
    int n = s.size();
    int left = 1;
    int right = n;
    for(int i = 0; i < n; ++i) {
        char c = s[i];
        if(c == 'l') {
            ans[right--] = i + 1;
        }
        else {
            ans[left++] = i + 1;
        }
    }
 
    for(int i = 0; i < n; ++i) {
        cout << ans[i + 1] << "\n";
    }
}
 
int main()
{
    IOS;ll t = 1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}