//What comes fast doesn't last and What comes last will never be your past :)
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
     string s;cin>>s;
     s += '%';
     int n;cin>>n;
     for(int i=0;i<n;i++){
         char a,b;cin>>a>>b;
         int l=0,r=0;
         for(int j=0;j<s.size();j++){
             if(s[j] == a){
                 l++;
             }
             else if(s[j] == b){
                 r++;
             }
             else{
                 res += min(l,r);
                 l=0,r=0;
             }
         }
     }
     cout<<res<<endl;
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