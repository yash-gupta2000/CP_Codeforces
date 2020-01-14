 
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
     string s;cin>>s;
     bool f = false;
     int ans;
     for(int i=0;i<s.size();i++)
     {
         int d = s[i]-'0';
         if(d%8==0)
         {
             f = true;
             ans = d;
         }
         for(int j = i+1;j<s.length();j++)
         {
             d = (10*(s[i]-'0')+s[j]-'0');
             if(d%8==0){
                 ans = d;
                 f = true;
             }

             for(int k=j+1;k<s.length();k++)
             {
                 d = (100*(s[i]-'0'))+(10*(s[j]-'0'))+s[k]-'0'; 
                 if(d%8==0)
                 {
                     ans = d;
                     f = true;
                 }
             }
         }

     }
     if(f){
         cout<<"YES"<<endl;
         cout<<ans<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
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