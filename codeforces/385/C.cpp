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
const int N = 1e7 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
bool prime[N];
ll pre[N];
ll cnt[N];
vector<int> v;
void algo_sieve(){
    mem(prime,false);
    for (int i = 2; i < N; ++i){
        if(!prime[i]){
            v.push_back(i);
            for (int j = i + i; j < N; j += i){
                prime[j]  = 1;    
            }
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=v[i];j<N;j+=v[i]){
            pre[v[i]] += cnt[j];
        }
    }
}

void solve()
{
     int n;cin>>n;
     mem(cnt,0);
     for(int i=0;i<n;i++){
         int x;cin>>x;
         cnt[x]++; 
     }
     algo_sieve();
     //Partial sums for query
     for(int i=1;i<N;i++){
         pre[i] += pre[i-1];    
     }
     //queries
     int queries;cin>>queries;
     while(queries--){
         int l,r;cin>>l>>r;
         cout<<pre[min(r,N-1)]-pre[min(l-1,N-1)]<<endl;
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