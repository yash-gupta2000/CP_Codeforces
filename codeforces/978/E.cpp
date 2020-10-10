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
     int n,w;cin>>n>>w;
     vector<int> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int l=0,r=0,passengers=0;
     for(int i=0;i<n;i++){
         passengers += a[i];
         l = min(l,passengers);
         r = max(r,passengers);
     }
     int lower = l;
     int higher = w-r;
     res = higher-abs(lower)+1;
     if(res < 0){
         cout<<0<<endl;
     }
     else{
         cout<<res<<endl;
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