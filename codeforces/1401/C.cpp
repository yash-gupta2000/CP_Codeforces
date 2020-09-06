 
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
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    vector<int> sorted(n);
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sorted[i] = a[i];
        mn = min(mn,a[i]);
    }
    sort(all(sorted));
    vector<int> diff;
    for(int i=0;i<n;i++){
        if(a[i]!=sorted[i]){
            diff.pb(a[i]);
        }
    }
    if(diff.size()<1){
        cout<<"YES"<<endl;
        return;
    }
    // for(auto it:diff){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    int gcdwhole=diff[0];
    for(int i=1;i<diff.size();i++){
        gcdwhole = gcd(gcdwhole,diff[i]);
    }
    //cout<<gcdwhole<<endl;
    if(gcdwhole%mn==0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;

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