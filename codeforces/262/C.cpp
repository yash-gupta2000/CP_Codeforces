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
ll res;

void solve()
{
     int q;cin>>q;
     vector<int> dis(q);
     for(int i=0;i<q;i++){
         cin>>dis[i];
     }
     int n;cin>>n;
     vector<int> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(all(a));
     sort(all(dis));
     int bag = dis[0];
     int i=n-1;
     bool free = false;
     while(i>=0){
         if(!free){
             //cout<<i<<endl;
             int ptr=bag;
             while(ptr-- && i>=0){
                 res += a[i];
                 i--;
             }
             free = !free;
         }
         else{
             //cout<<i<<endl;
             i -= 2;
             free = !free;
         }
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