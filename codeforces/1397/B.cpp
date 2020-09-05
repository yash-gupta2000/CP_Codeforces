 
//It doesn't matter how slow you go, Unless you don't stop.
#include<iostream>
#include<algorithm>
#include<bitset>
 
#include<cmath>
#include<cstring>
#include<climits>
 
#include<deque>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
 
#include<fstream>
#include<chrono>
using namespace std;
 
typedef long long LL;
typedef pair<LL,LL> p64;
typedef vector<LL> v64;
typedef map<LL,LL> mp64;
 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,s,e) for(long long i=s;i<=e;i++)
#define brep(i,s,e) for(long long i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
LL inf = 1e13; 
bool check(int c,int n){
    LL x=1;
    for(int i=1;i<n;i++){
        if(x <= inf/c){
            x *= c;
        }
        else{
            return false;
        }
    }
    return true;
}
void solve()
{
     LL n;cin>>n;
     vector<LL> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }     
     sort(a.begin(),a.end());
     LL ans = inf;
     for(int i=1;check(i,n);i++){
         LL cost=0,p=1;
         for(int j=0;j<n;j++){
             cost += abs(a[j]-p);
             p *= i;
         }
         ans = min(ans,cost);
     }
     cout<<ans;
}
 
int main()
{
    DANGER;
    ofstream out("output.txt");
 
    auto start = chrono::high_resolution_clock::now();
    
    LL t = 1;
    // cin>>t;
    rep(test,1,t)
    {
        solve();
    }
    
    auto stop = chrono::high_resolution_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start); 
    // cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}