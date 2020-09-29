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
vector<ll> factors;
void factorize(ll n) {
    for (ll i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        factors.push_back(n);
    }
}
bool check(ll n){
    for (ll i = 2; i*i <= n; ++i)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
     ll n;cin>>n;
     factorize(n);
     bool flag = check(n);
     if(flag){
         cout<<"1"<<endl;
         cout<<"0"<<endl;
     }
     else{
          if(factors.size()>2){
              cout<<"1"<<endl;
              cout<<factors[0]*factors[1]<<endl;
          }
          else{
              cout<<"2"<<endl;
          }
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