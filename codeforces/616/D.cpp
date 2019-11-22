 
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
     LL n,k;cin>>n>>k;
     LL a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     mp64 m;
     int start=0,end=0,l=0,now=0;
     for(int i=0;i<n;i++)
     {
         m[a[i]]++;
         if(m[a[i]]==1)//jaise hi naya elemnt discover hua, we maintain its hash
         {
             now++;
         }

         while(now>k)
         {
             m[a[l]]--;
             if(m[a[l]]==0)
             {
                 now--;
             }
             l++;
         }
         if(i-l+1>=end-start+1)
         {
             start = l;
             end = i;
         }

     }

     cout<<start+1<<" "<<end+1<<endl;

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