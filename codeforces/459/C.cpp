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
int n,k,d;
int ans[1001][1001];

void go(int student,int buses,int day){
    int student_id = student;
    vector<int> cfg;
    for(int i=0;i<day;i++){
        cfg.pb(student%buses);
        student /= buses;
    }
    for(int i=0;i<day;i++){
        ans[student_id][i] = cfg[i]+1;
    }
}

void solve()
{
     cin>>n>>k>>d;
     if((ll)n > pow(k,d)){
         cout<<"-1"<<endl;
         return;
     }
     for(int i=0;i<n;i++){
         go(i,k,d);
     }
     for(int i=0;i<d;i++){
         for(int j=0;j<n;j++){
             cout<<ans[j][i]<<" ";
         }
         cout<<endl;
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