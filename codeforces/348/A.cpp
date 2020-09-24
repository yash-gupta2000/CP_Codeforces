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
vector<int> a;
bool check(ll mid,int n){
    ll sum=0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    if(n*mid - sum >= mid && a[n-1] <= mid){
        return true;
    }
    return false;
}
void solve()
{
     int n;cin>>n;
     a.resize(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(all(a));
     ll l = 0,r=1e10;
     while(r>l+1){
         ll mid = (l+r)/2;
         if(check(mid,n)){
             r = mid;
         }
         else{
             l = mid;
         }
     }
     cout<<r<<endl;
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