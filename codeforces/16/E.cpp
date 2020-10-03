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
ll res;
int n;
double a[20][20];
double dp[1<<19];
double pmove(int bitmask,int j){
    int alive = __builtin_popcount(bitmask);
    double denominator = (alive*(alive-1))/2;
    double move_probab = 0;
    for(int fish=0;fish<n;fish++){
        if(bitmask&(1<<fish)){
            move_probab += a[fish][j];
        }
    }
    return move_probab/(1.0*denominator);
}
double go(int bitmask){
    if(__builtin_popcount(bitmask) == n){
        return 1;
    }
    if(dp[bitmask]>-0.9){
        return dp[bitmask];
    }
    double ans=0;
    for(int fish=0;fish<n;fish++){
        bool alive = bitmask&(1<<fish);
        if(!alive){
            int prevmask = bitmask^(1<<fish);
            double prevprobab = go(prevmask);
            ans += prevprobab*pmove(prevmask,fish);
        }
    }
    dp[bitmask] = ans;
    return dp[bitmask];
}
void solve()
{
    mem(dp,-1.0);
     cin>>n;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cin>>a[i][j];
         }
     }    
     for(int i=0;i<n;i++){
         cout<<fixed<<setprecision(6)<<go((1<<i))<<" ";
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