//Currently in Spain, But S is silent :|
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
     vector<int> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(all(a));
     bool flag = false;
     if(n==1){
         if(a[0]==1){
             cout<<"2"<<endl;
             return;
         }
         else{
             cout<<"1"<<endl;
             return;
         }
     }
     vector<int> ans(n);
     ans[0] = 1;
     for(int i=1;i<n;i++){
         ans[i] = a[i-1];
     }
     for(int i=0;i<n;i++){
         if(ans[i]!=a[i]){
             flag = true;
         }
     }
     if(flag == false){
         ans[n-1] += 1;
     }
     for(int i=0;i<n;i++){
         cout<<ans[i]<<" ";
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