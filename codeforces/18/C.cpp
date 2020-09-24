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
const int N = 2e5 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;

void solve()
{
     int n;cin>>n;
     vector<int> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     vector<int> pref(n);
     vector<int> suff(n);
     pref[0] = a[0];
     suff[n-1] = a[n-1];
     for(int i=1;i<n;i++){
         pref[i] = a[i] + pref[i-1];
     }
     for(int i=n-2;i>=0;i--){
         suff[i] = a[i] + suff[i+1];
     }
     for(int i=0;i<n-1;i++){
         if(pref[i] == suff[i+1]){
             res++;
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