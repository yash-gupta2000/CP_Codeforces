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
     int k;cin>>k;
     vector<pair<int,int>> a(n);
     map<int,int> hash;
     vector<int> orz(n);
     for(int i=0;i<n;i++){
         cin>>a[i].first;
         a[i].second = i;
         hash[a[i].first]++;
         orz[i] = a[i].first;
     }
     sort(all(a));
     vector<int> res(n);
     for(int i=n-1;i>=0;i--){
         res[a[i].second] = i-(hash[a[i].first]-1);
         hash[a[i].first]--;
     }
    //  for(int i=0;i<n;i++){
    //      cout<<res[i]<<" ";
    //  }
    //  cout<<endl;
     //Now settling fights
     while(k--){
         int u,v;cin>>u>>v;
         --u,--v;
         if(orz[u]>orz[v]){
             res[u]--;
         }
         else if(orz[v]>orz[u]){
             res[v]--;
         }
     }
     for(int i=0;i<n;i++){
         cout<<res[i]<<" ";
     }
     cout<<endl;

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