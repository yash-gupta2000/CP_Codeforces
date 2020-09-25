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
vector<ll> a(N);
ll n,d;
bool check(int m,int idx){
    if(abs(a[idx]-a[m]) <= d){
        return true;
    }
    return false;
}
void solve()
{
     cin>>n>>d;
     fill(a.begin(),a.end(),inf);
     for(int i=1;i<=n;i++){
         cin>>a[i];
     }
     for(int i=1;i<=n-2;i++){
         ll elmt = a[i];
         ll l=i,r=2*n;
         while(r > l+1){
             ll m = (l+r)/2;
             if(check(m,i)){
                 l = m;
             }
             else{
                 r = m;
             }
         }
         ll upto = l;
         //cout<<i<<" "<<upto<<endl;
         if(upto-i < 2){
             continue;
         }
         else{
             ll add = ((upto-i-1)*(upto-i))/2;
             res += add;
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