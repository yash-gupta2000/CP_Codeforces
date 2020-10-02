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
ll res=1;
ll nCr[1005][1005];
ll powr[1005];
void precomp(int n){
    powr[0] = 1;powr[1] = 1;
    for(int i=2;i<=n;i++){
        powr[i] = (powr[i-1]*2)%mod;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) nCr[i][j]=1;
            else nCr[i][j]=(nCr[i-1][j-1]+nCr[i-1][j])%mod;
        }
    }
}
void solve()
{
     int n,m;cin>>n>>m;
     vector<int> a(m);
     for(int i=0;i<m;i++){
         cin>>a[i];
     }
     sort(all(a));
     precomp(n);
     ll cnt=0,temp=0;
     for(int i=0;i<m;i++){
         if(i==0){
             temp = a[i]-1;
         }
         else{
             temp = a[i]-a[i-1]-1;
             res = (res*powr[temp])%mod;
         }
         cnt += temp;
         res = (res*nCr[cnt][temp])%mod;
     }
     cnt += (n-a[m-1]);
     res = (res*nCr[cnt][n-a[m-1]])%mod;
     cout<<res;

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