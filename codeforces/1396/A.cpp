 
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
     int N;
   cin >> N;
   vector<LL> A(N);
   for (int i = 0; i < N; ++i) cin >> A[i];
   if (N == 1) {
      for (int z = 0; z < 3; ++z) {
         cout << "1 1\n";
         cout << -A[0] << "\n";
         A[0] = 0;
      }
      return;
   }
   cout << "1 " << N << "\n";
   for (int i = 0; i + 1 < N; ++i) cout << -A[i] * N << " "; cout << "0\n";
   cout << "1 " << N - 1 << "\n";
   for (int i = 0; i + 1 < N; ++i) cout << A[i] * (N - 1) << " "; cout << "\n";
   cout << N << " " << N << "\n";
   cout << -A[N - 1] << "\n";
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