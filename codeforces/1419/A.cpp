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
     string s;cin>>s;
     int evenindexoddval=0,oddindexevenval=0;;
     for(int i=0;i<n;i++){
         int elmt = s[i]-'0';
         if(i%2){
             if(elmt%2==0){
                 oddindexevenval++;
             }
         }
         else{
             if(elmt%2==1){
                 evenindexoddval++;
             }
         }
     }
     if(n%2){
         if(evenindexoddval > 0){
             cout<<"1"<<endl;
         }else{
             cout<<"2"<<endl;
         }
     }
     else{
         if(oddindexevenval > 0){
             cout<<"2"<<endl;
         }
         else{
             cout<<"1"<<endl;
         }
     }
}
 
int main()
{
    IOS;ll t = 1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}