//Only CP and Sidhu Moosewala keeps me sane.
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
const int N = 2e5 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;

void solve()
{
     string s;
    int n, k, ans=0, l, r;
    cin>>n>>k;
    cin>>s;
    if(k>n/2)
    {
        reverse(s.begin(),s.end());
        k = n - k + 1;
    }
    int flag=0, flag1=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i] != s[n - i - 1])
        {
            ans += min(26 - abs(s[i]-s[n-i-1]), abs(s[i]-s[n-i-1]));
            if(!flag)
            {
                flag=1;
                l=i;
            }
            if(flag)
            {
                flag1=1;
                r=i;
            }
        }
    }
    k--;
    if(!flag && !flag1)
        ans=0;
    else if(flag && !flag1)
        ans += abs(k-l);
    else if(flag && flag1)
        ans += min(abs(k-r)+abs(r-l), abs(k-l)+abs(r-l));
    cout<<ans;
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