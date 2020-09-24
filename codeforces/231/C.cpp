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
int n,k;    
ll dp[N];
ll a[N];
bool check(ll m){
    //cout<<m<<endl;
    for(int i=m;i<=n;i++){
        if((m*a[i]-(dp[i]-dp[i-m])) <= k){//Here, we m*a[i] gives total additions that we must make so as to make each element before mid to a[i],but as we are only interested in last i-mid elemnts,we decrease sum from it.
            //If any a[i] satisfies condition we store a[i] value and l in binary search gives freq of it.
            //A different way of using binary seach.
            res = a[i];
            return true;
        }
    }
    return false;
}
void solve()
{
     cin>>n>>k;
     //a.resize(n+5);
     for(int i=1;i<=n;i++){
         cin>>a[i];
     }
     sort(a+1,a+n+1);
     for(int i=1;i<=n;i++){
         dp[i] = dp[i-1]+a[i];
     }
     ll l = 0,r = 2*n;
     while (r>l+1)
     {
        ll m = (l+r)/2;
        if(check(m)){
            l = m;
        }
        else{
            r = m;
        }
     }
     cout<<l<<" "<<res<<endl;
     
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