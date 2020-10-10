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
     int n,q;
     cin>>n>>q;
     vector<ll> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     vector<ll> pref(n);
     pref[0] = a[0];
     for(int i=1;i<n;i++){
         pref[i] = pref[i-1] + a[i];
     }
    while(q--){
        ll query;cin>>query;
        int dorm = lower_bound(all(pref),query)-pref.begin();
        if(pref[dorm]==query){
            if(dorm-1 >= 0){
            cout<<dorm+1<<" "<<pref[dorm]-pref[dorm-1]<<endl;
            }
            else{
                cout<<dorm+1<<" "<<pref[dorm]<<endl;
            }
        }
        else{
            if(dorm-1>=0){
            cout<<dorm+1<<" "<<query-pref[dorm-1]<<endl;
            }
            else{
                cout<<dorm+1<<" "<<query<<endl;
            }
        }
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