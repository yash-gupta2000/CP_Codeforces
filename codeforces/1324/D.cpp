 
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
LL findPairs(LL arr[],LL n) 
{ 
    int l = 0, r = n-1; 
    LL result = 0; 
  
    while (l < r) 
    { 
        if (arr[l] + arr[r] > 0) 
        { 
            result += (r - l); 
            r--; 
        } 
  
        // Move to smaller value 
        else
            l++; 
    } 
  
    return result; 
} 
void solve()
{
     LL n;cin>>n;
     LL a[n],b[n],diff[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
         cin>>b[i];
     }
     for(int i=0;i<n;i++)
     {
         diff[i] = a[i]-b[i];
     }
     sort(diff,diff+n);
     LL res = findPairs(diff,n);
     cout<<res<<endl;

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