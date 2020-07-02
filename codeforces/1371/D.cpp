 
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
int a[305][305]; 
void solve()
{
     int n,k;cin>>n>>k;
     if(k%n==0){
         cout<<"0"<<endl;
     }
     else{
         cout<<"2"<<endl;
     }
     memset(a,0,sizeof a);
     for(int i=0;i<n && k!=0;i++){
         for(int j=0;j<n && k!=0;j++){
             int p = j;
             int q = (i+j)%n;
             a[p][q] = 1;
             k--;
         }  
     }
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cout<<a[i][j];
         }
         cout<<endl;
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