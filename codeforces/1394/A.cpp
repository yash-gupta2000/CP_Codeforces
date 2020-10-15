/*
author: Yash Gupta
*/
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

void solve()
{
     int n,d,m;cin>>n>>d>>m;
     vector<ll> large(n+2),small(n+2);
     for(int i=0;i<n;i++){
         int x;cin>>x;
         if(x>m){
             large.pb(x);
         }
         else{
             small.pb(x);
         }
     }
     sort(all(small),greater<ll>());
     sort(all(large),greater<ll>());
     large.insert(large.begin(),0);
     small.insert(small.begin(),0);
     for(int i=1;i<large.size();i++){
         large[i] += large[i-1];
     }
     int j;
     for(j=1;j<small.size();j++){
         small[j] += small[j-1];
     }
     fill(small.begin()+j,small.end(),small[j-1]);
     ll res=0;
     for(int i=0;i<=n;i++){
         ll left = n-i;
         ll daysleft = (left+d)/(d+1);
         ll smallres = large[daysleft];
         res = max(res,smallres+small[i]);
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