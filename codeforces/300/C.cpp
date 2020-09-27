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
const int N = 1e6 + 50;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll fact[N];
int a,b,n;
ll res;
void initz(){
    fact[0] = fact[1] = 1;
    for(int i=2;i<N;i++){
        fact[i] = (fact[i-1]*1LL*i)%mod;
    }
}
ll binpow(ll val, ll deg, ll mod) {
    if (!deg) return 1 % mod;
    if (deg & 1) return binpow(val, deg - 1, mod) * val % mod;
    long long res = binpow(val ,deg >> 1, mod);
    return (res*res) % mod;
}
ll bincoef(int n,int k){
    ll midans = fact[n];
    //cout<<midans<<endl;
    midans = (midans*1LL*binpow(fact[k],mod-2,mod))%mod;
    midans = (midans*1LL*binpow(fact[n-k],mod-2,mod))%mod;
    return midans%mod;
}
bool check(ll val, int a, int b) {
    while (val > 0) {
        if (val % 10 == a || val % 10 == b) {
            val /= 10;
        } else return false;
    }
    return true;
}
void solve()
{
    initz();
    cin>>a>>b>>n;
    for(int i=0;i<=n;i++){
        ll num = a*i + b*(n-i);
        if(check(num,a,b)){
            //cout<<n<<" "<<i<<" "<<num<<" "<<bincoef(n,i)<<endl;
            res += bincoef(n,i);
            res %= mod;
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