 
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
     LL n;LL cp;
     cin>>n>>cp;
     vector<p64> v;
     LL init=0,fin=0;
     v64 diff;
     LL cnt=0;
     rep(i,1,n)
     {
         LL x,y;
         cin>>x>>y;
         init += x;
         fin += y;
         v.pb(make_pair(x,y));
         diff.pb(x-y);
     }
     LL dummy = init-cp;
     //cout<<dummy<<endl;
     if(fin>cp)
     {
         cout<<"-1"<<endl;
         return;
     }
     else if(init<cp)
     {
         cout<<"0"<<endl;
         return;
     }
     else
     {
         sort(diff.begin(),diff.end(), greater<LL>());
         int i=0;
         //cout<<dummy;
         while(dummy>0)
         {
             dummy = dummy - diff[i];
             cnt++;
             i++;
         }

         cout<<cnt<<endl;
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