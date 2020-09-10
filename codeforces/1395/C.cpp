 
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
vector<int> a,b;
int n,m;
int dp[209][2000];
int go(int idx,int val){
    if(idx==n){
        return val;
    }
    if(dp[idx][val]!=-1){
        return dp[idx][val];
    }
    int ans = INT_MAX;
    for(int i=0;i<m;i++){
        int elmt = a[idx]&b[i];
        ans = min(ans,go(idx+1,val|elmt));
    }
    return dp[idx][val] = ans;
}
void solve()
{
     cin>>n>>m;
     a.resize(n);b.resize(m);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     for(int j=0;j<m;j++){
         cin>>b[j];
     }
     memset(dp,-1,sizeof dp);
     cout<<go(0,0)<<endl;
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