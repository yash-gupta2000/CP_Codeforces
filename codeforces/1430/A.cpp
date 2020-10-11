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
     bool found = false;
     for(int i=0;i<=n;i = i+3){
         for(int j=0;j<=n;j = j+5){
             for(int k=0;k<=n;k = k+7){
                 if(i+j+k == n){
                     cout<<i/3<<" "<<j/5<<" "<<k/7<<endl;
                     found = true;
                     return;
                 }
             }
         }
     }
     if(!found){
         cout<<"-1"<<endl;
         return;
     }
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