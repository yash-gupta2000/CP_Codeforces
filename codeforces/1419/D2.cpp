/*
author: Yash Gupta
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e5 + 5;
const int inf = 9e18 + 9;
const int mod = 1e9+7;
vector<int> a;

void solve()
{
     int n;cin>>n;
     a.resize(n+1);
     vector<int> res(n+5);
     for(int i=1;i<=n;i++){
         cin>>a[i];
     }
     sort(all(a));
     int ptr=1;
     for(int i=2;i<=n;i = i+2){
         res[i] = a[ptr];
         ptr++;
     }
     for(int i=1;i<=n;i=i+2){
         res[i] = a[ptr];
         ptr++;
     }
     int cnt=0;
     for(int i=2;i<n;i++){
         if(res[i] < res[i-1] && res[i] < res[i+1]){
             cnt++;
         }
     }
     cout<<cnt<<endl;
     for(int i=1;i<=n;i++){
          cout<<res[i]<<" ";
     }
}
 
int32_t main()
{
    IOS;int t = 1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}