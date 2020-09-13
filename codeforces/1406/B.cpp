 
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
     vector<int> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(all(a));
     int k=5;//subseuqnce of size k
     LL res=1;
     if(a[n-1]==0 && k%2){
         cout<<0<<endl;
         return;
     }
     if(a[n-1] < 0){
            for(int i=n-1;i>=n-k;i--){
                res *= a[i];
            }
            cout<<res<<endl;
            return;
     }
     int i=0,j=n-1;
     if(k%2){
         res *= a[j];
         j--;
         k--;
     }
     k /= 2;
     for(int p=0;p<k;p++){
         int left = a[i]*a[i+1];
         int right = a[j]*a[j-1];
         if(left > right){
             res *= left;
             i += 2;
         }
         else{
             res *= right;
             j -= 2;
         }
     }
     cout<<res<<endl;

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