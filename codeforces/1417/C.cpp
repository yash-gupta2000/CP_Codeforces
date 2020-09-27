//Currently in Spain, But S is silent :|
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 3e5 + 50;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
int a[N];
int ans[N];
int last[N];
int bal[N];

void solve()
{
     int n;cin>>n;
     for(int i=1;i<=n;i++){
         cin>>a[i];
     }
     for(int i=0;i<=n;i++){
         last[i] = 0;
         bal[i] = 0;
         ans[i] = -1;
     }
    /* This loop below is most important part of algorithm. It calculates the max. gap between the number that occured in bal array. last array stores
    last index and is updated as same num occurs again.*/
     for(int i=1;i<=n;i++){
         int elmt = a[i];
         bal[elmt] = max(bal[elmt],i-last[elmt]);
         last[elmt] = i;
     }
     //precomputation
     for(int i=1;i<=n;i++){
         bal[i] = max(bal[i],n-last[i]+1);
         /* array is 1 3 1 5 3 1 9 9 9 9, If we don't use this step then
         we will fill 1 from size 3 to every size till 10, but this is not true and for index 7,8,9 or 8,9,10 or 6,7,8: 3 doesn't occur.
         Thus, n-last[i]+1 gives 6 which is correct size form which it should be filled */
         for(int block = bal[i];block<=n && ans[block] == -1;block++){
             ans[block] = i;
         }    
     }
     for(int i=1;i<=n;i++){
         cout<<ans[i]<<" ";
     }
     cout<<endl;
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t = 1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}