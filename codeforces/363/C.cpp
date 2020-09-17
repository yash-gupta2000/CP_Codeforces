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
     string s,ans;
     cin>>s;
     int j=0;
     ans.pb(s[0]);
     j++;
     if(s.size()>1){
         ans.pb(s[1]);
         j++;
     }
     for(int i=2;i<s.size();i++){
         if(s[i]!=ans[j-1]){
             ans.pb(s[i]);
             j++;
         }
         else if(s[i] == ans[j-1] && ans[j-2]!=ans[j-3] && ans[j-1]!=ans[j-2]){
             ans.pb(s[i]);
             j++;
         }
     }
     cout<<ans<<endl;

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