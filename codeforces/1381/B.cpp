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

void solve()
{
     int n;cin>>n;
     set<int,greater<int>> s;
     vector<int> a(2*n);
     for(int i=0;i<2*n;i++){
         cin>>a[i];
         s.insert(i+1);
     }
     vector<int> subsets;
     int sze=0;
     //Size of subsets for suffix
     for(int i=2*n-1;i>=0;i--){
         int elmt = a[i];
         if(*(s.begin()) == elmt){
             s.erase(elmt);
             sze++;
             subsets.pb(sze);
             sze = 0;
         }
         else{
             sze++;
             s.erase(elmt);
         }
     }
     //DP for subset sum
     bool dp[n+1];
     mem(dp,0);
     dp[0] = true;
     for(auto it:subsets){
         for(int i=n;i>0;i--){
             if(i >= it){
                 dp[i] = dp[i] || dp[i-it];
             }
         }
     }
     if(dp[n] == true){
         cout<<"YES"<<endl;
         return;
     }
     cout<<"NO"<<endl;
}
 
int main()
{
    IOS;ll t = 1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}