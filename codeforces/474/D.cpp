 
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
LL N = 1e5+9;
LL h[100000+45];
LL mod = 1e9 + 7;
void solve()
{
   LL t, k, l, r;
   cin >> t >> k;
   h[0]  =1;
   for(int i=1;i<=k-1;i++)
   {
       h[i] = 1;

   }
   h[k] = 2;
   for(int i=k+1;i<=N;i++) {
       h[i] = (h[i - k] + h[i - 1]) % mod;
   }
// //    for(int i=0;i<=10;i++)
//         cout << h[i] << ' ';
    
   for(int i=1;i<=N-1;i++)
   {
       h[i] = (h[i] + h[i-1]) % mod;
   }
       
       
   while(t--) {
     cin >> l >> r;
     //cout<<h[r]<<" "<<h[l-1]<<endl;
     cout << (h[r] - h[l-1]+mod) % mod << '\n';            
   } 
    return ;
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