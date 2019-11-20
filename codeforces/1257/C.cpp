 
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
     LL n;
     cin>>n;
    //  LL a[n];
    //  bool flag=false;
    //  for(int i=0;i<n;i++)
    //  {
    //      cin>>a[i];
    //  }
     mp64 m;
     LL len = INT_MAX;
     for(int i=0;i<n;i++)
     {
    //      for(int j=i;j<n;j++)
    //      {
    //          //cout<<"j"<<j<<" ";
    //          m[a[j]]++;
    //          if(m[a[j]]>1)
    //          {
    //              len = min(len,LL((j+1)-i));
    //              //cout<<len<<endl;
    //              break;
    //          }
    //          if((j-i+1)>len)
    //          {
    //              break;
    //          }
    //      }
    //      //cout<<endl;
         
    //      m.clear();
        int x;cin>>x;
        if(m.count(x))
        {
            len = min(len,i-m[x]+1);
        }
        m[x] = i;
        
    }

     if(len==INT_MAX)
     {
         cout<<"-1"<<endl;
     }
     else
     {
         cout<<len<<endl;
     }
     
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