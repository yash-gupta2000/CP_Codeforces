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
ll res = INT_MAX;
vector<int> a(N);
vector<int> pref(N);
void solve()
{
     int n,l,r,lextra,rextra;
     cin>>n>>l>>r>>lextra>>rextra;
     for(int i=1;i<=n;i++){
         cin>>a[i];
         pref[i] = pref[i-1]+a[i];
     }
     for(int i=0;i<=n;i++){
         int left = i;
         int right=n-i;
         int leftsum = pref[left];
         int rightsum = pref[n]-pref[n-right];
         int curans = leftsum*l + rightsum*r;
         int penalty = abs(right-left) - 1;
         if(left > right){
             curans += penalty*lextra;
         }
         else if(right>left){
             curans += penalty*rextra;
         }
         res = min((ll)curans,res);
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