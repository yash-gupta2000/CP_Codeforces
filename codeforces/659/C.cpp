 
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
     LL n,m;
     cin>>n>>m;
     set<LL> s;
     v64 v;
     for(int i=0;i<n;i++)
     {
         int input;cin>>input;
         v.push_back(input);
         s.insert(input);
     }
     int toys=0;int i=0;
     LL mx = *max_element(v.begin(),v.end());
     sort(all(v));
     v64 res;
     LL init;LL cnt=0;
     for(int i=1;i<=mx+5,m>0;i++)
     {
         init = s.size();
         s.insert(i);
         if(s.size() != init && m>0)
         {
             m -= i;
             if(m>=0)
             {
                 cnt++;
                res.push_back(i);
             }
             
             
         }
     }

     cout<<cnt<<endl;
     for(auto it:res)
     {
         cout<<it<<" ";
     }


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