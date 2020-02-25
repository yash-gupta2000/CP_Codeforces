 
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

LL arr1[26],arr2[26][26];

void solve()
{
  string S;
  cin>>S;
  for (int i=0;i<S.length();i++){
    int c=S[i]-'a';
    for (int j=0;j<26;j++)
      arr2[j][c]+=arr1[j];
    arr1[c]++;
  }
//   for(int i=0;i<4;i++)
//   {
//       for(int j=0;j<4;j++)
//       {
//           cout<<arr2[i][j]<<" ";
//       }
//       cout<<endl;
//   }
//   cout<<endl;
//   for(int i=0;i<4;i++)
//   {
//       cout<<arr1[i]<<" ";
//   }
//   cout<<endl;
  LL ans=0;
  for (int i=0;i<26;i++)
    ans=max(ans,arr1[i]);
  for (int i=0;i<26;i++)
    for (int j=0;j<26;j++)
      ans=max(ans,arr2[i][j]);
  cout<<ans<<endl;
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