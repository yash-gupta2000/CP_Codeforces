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
     vector<int> alice(3);
     vector<int> bob(3);
     for(int i=0;i<3;i++){
         cin>>alice[i];
     }
     for(int i=0;i<3;i++){
         cin>>bob[i];
     }
     int mx = 0;
     mx += min(alice[0],bob[1]);
     mx += min(alice[1],bob[2]);
     mx += min(alice[2],bob[0]);

     int mn=0;
     for(int i=0;i<3;i++){
         int j = (i+1)%3;
         int x = min(alice[j],bob[i]);
         alice[j] -= x;
     }
     for(int i=0;i<3;i++){
         int x = min(alice[i],bob[i]);
         alice[i] -= x;
         mn += alice[i];
     }

     cout<<mn<<" "<<mx<<endl;
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