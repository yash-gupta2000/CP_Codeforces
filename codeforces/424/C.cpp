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
const int N = 2e6 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
vector<int> a(N);
vector<int> pref(N);

void solve()
{
     int n;cin>>n;
     for(int i=1;i<=n;i++){
         cin>>a[i];
         res ^= a[i];
         pref[i] = (pref[i-1]^i);
     }
/* 0 1 1 1 1 1 1 1 -> i = 1
0 0 2 2 2 2 2 2 -> i = 2
0 1 0 3 3 3 3 3 -> i = 3
0 0 1 0 4 4 4 4 -> i = 4
0 1 2 1 0 5 5 5 -> i = 5
0 0 0 2 1 0 6 6 -> i = 6
0 1 1 3 2 1 0 7 -> i = 7
0 0 2 0 3 2 1 0 -> i = 8 
We can see that cycle formation takes place in every column of size i. Thus total no. of cycles
is lower bound of n/i and if it is odd and 1 cycle remains and other (n/i - 1) cycles cancels
out due to property of xor.also we xor with remainder if it is left.*/
     for(int i=1;i<=n;i++){
         int complete_cycles = n/i;//Make matrix
         int remainder = n%i;
         if(complete_cycles%2){
             res ^= (pref[i-1]^pref[remainder]);
         }
         else{
             res ^= pref[remainder];
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