//It's really tough
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
     vector<int> a(n),b(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
         b[i] = a[i];
     }
     sort(all(b));
     int not_sorted=0;
     for(int i=0;i<n;i++){
         //cout<<a[i]<<" "<<b[i]<<endl;
         if(b[i] != a[i]){
             not_sorted++;
         }
     }
     //cout<<not_sorted<<endl;
     if(not_sorted <= 2){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
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