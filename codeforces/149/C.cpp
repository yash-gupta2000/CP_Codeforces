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
     priority_queue<pair<int,int>> q;
     for(int i=0;i<n;i++){
         cin>>a[i];
         q.push({a[i],i+1});
     }
     vector<int> team1,team2;
     bool flag = false; //false to first,true to second
     while(!q.empty()){
         pair<int,int> player = q.top();
         q.pop();
         if(!flag){
             team1.pb(player.second);
         }
         else{
             team2.pb(player.second);
         }
         flag = !flag;
     }
     cout<<team1.size()<<endl;
     for(auto it:team1){
         cout<<it<<" ";
     }
     cout<<endl;
     cout<<team2.size()<<endl;
     for(auto it:team2){
         cout<<it<<" ";
     }
     cout<<endl;


     

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