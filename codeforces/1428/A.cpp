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
     int x1,y1,x2,y2;
     cin>>x1>>y1>>x2>>y2;
     int ans =0;
     if(x1==x2 || y1 == y2){
         if(x1 == x2){
             ans = abs(y1-y2);
         }
         else{
             ans = abs(x2-x1);
         }
         cout<<ans<<endl;
         return;
     }
     else{
         int vert = abs(y2 - y1);
         ans = 2;
         int horiz = abs(x2-x1);
         cout<<vert+horiz+ans<<endl;
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