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
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    sort(all(a));
    int init_start = a[0].first;
    int init_end = a[0].second;
    for(int i=1;i<n;i++){
        if(a[i].first > init_start && init_end > a[i].second){
            res ++;
        }
        else{
        init_start = a[i].first;
        init_end = a[i].second;
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