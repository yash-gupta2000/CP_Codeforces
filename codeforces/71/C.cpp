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
vector<int> a;
int n;
bool go(int gap){
    for(int i=0;i<gap;i++){
        bool flag = true;
        for(int j = 0;i+j<n;j+=gap){
            if(!a[i+j]){
                flag = false;
                break; 
            }
        }
        if(flag){
            return true;
        }
    }
    return false;
}
void solve()
{
     cin>>n;
     a.resize(n);
     bool flag = true;
     for(int i=0;i<n;i++){
         cin>>a[i];
         if(!a[i]){
             flag = false;
         }
     }
     if(flag){
         cout<<"YES"<<endl;
         return;
     }
     for(int i=2;i*i<=n;i++){
         if(i==n/2){
             continue;  
         }
         if(n%i){
             continue;
         }
         bool check = go(i);
         if(check){
             //cout<<"Ran"<<i<<endl;
             cout<<"YES"<<endl;
             return;
         }
         if(i!=2){
             check = go(n/i);
             if(check){
                 cout<<"YES"<<endl;
                 return;
             }
         }
     }
     cout<<"NO"<<endl;

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