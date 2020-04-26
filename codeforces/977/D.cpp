 
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
     int n;cin>>n;
     vector<LL> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(a.begin(),a.end(),greater<LL>());
     vector<LL>::iterator pos;
     vector<LL>::iterator posx;
     LL elmt=-1;
     for(int i=0;i<n;i++)
     {
         LL tofoundx = a[i]*3;
         pos = find(a.begin(),a.end(),tofoundx);
         LL tofoundy = 0;
         if(a[i]%2)
         {
             posx = a.end();
         }else
         {

             tofoundy = a[i]/2;
             posx = find(a.begin(),a.end(),tofoundy);
         }
         if(pos==a.end() && posx==a.end())
         {
             elmt = a[i];
             break;
         }
     }
     //Giving out pattern
     vector<LL> res;
     res.pb(elmt);
     //cout<<elmt<<endl;
     //cout<<n<<endl;
     while(n!=1)
     {
         LL test = elmt/3;
         LL testx = elmt*2;
         pos = find(a.begin(),a.end(),test);
         if(pos!=a.end())
         {
             res.pb(test);
             elmt /= 3;
             a.erase(pos);
         }
         else
         {
             posx = find(a.begin(),a.end(),testx); 
             if(posx!=a.end())
             {
                 res.pb(testx);
                 elmt *= 2;
                 a.erase(posx);
             }
         }
         n--;
     }
     //cout<<res.size()<<endl;
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