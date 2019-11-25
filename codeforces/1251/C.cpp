 
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
     string s;
    cin>>s;
    
 
    vector<LL>v[2];
    for(int i=0;i<s.size();i++)
    {
        v[(s[i]-'0')%2].push_back(s[i]);
    }
    
    LL c1=0,c2=0;
    LL n1=v[0].size();
    LL n2= v[1].size();
      string ans=" ";
      while(n1>c1||n2>c2)
      
      {
          if(n1==c1)
          {
             ans.push_back(v[1][c2]); 
             c2++;
          }
          else if(n2==c2)
          {
              ans.push_back(v[0][c1]);
              c1++;
          }
          else
          {
              if(v[0][c1]>v[1][c2])
              {
                  ans.push_back(v[1][c2]);
                  c2++;
              }
              else
              {
                ans.push_back(v[0][c1]); 
                 c1++;
              }
          }
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