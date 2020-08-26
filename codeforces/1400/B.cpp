 
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
 
void solve()
{
     LL cap1,cap2;
     LL cnts,cnta;
     LL ws,wa;
     cin>>cap1>>cap2>>cnts>>cnta>>ws>>wa;
     LL ans=0;
     if(ws>wa){
         swap(ws,wa);
         swap(cnts,cnta);
     }
     for(int i=0;i<=cnts;i++){
         if(i*(LL)ws > cap1){
             continue;
         }
         LL fsword = min(cap2/ws,cnts-i);
         LL cap1left = cap1-(i*ws);
         LL cap2left = cap2-(fsword*ws);
         LL myaxe = min(cap1left/wa,cnta);
         LL faxe = min(cap2left/wa,cnta-myaxe);
         ans = max(ans,i+fsword+myaxe+faxe);
     }
     cout<<ans<<endl;
}
 
int main()
{
    DANGER;
    ofstream out("output.txt");
 
    auto start = chrono::high_resolution_clock::now();
    
    LL t = 1;
    cin>>t;
    rep(test,1,t)
    {
        solve();
    }
    
    auto stop = chrono::high_resolution_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start); 
    // cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}