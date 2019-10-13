 
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
#define MAX 100000
using namespace std;
 
typedef long long LL;
typedef pair<LL,LL> p64;
typedef vector<LL> v64;
typedef map<LL,LL> mp64;
 
#define pb push_back
#define V vector<int>
#define mp make_pair
#define ff first
#define ss second
#define rep(i,s,e) for(long long i=s;i<=e;i++)
#define brep(i,s,e) for(long long i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int n, k, pos;
int a[MAX+1];

void solve()
{
     int n , k , i , j , c = 1 ,store = 0 , t = 1e6;
    cin >> n >> k;
    set < int > s;
    V v(n);
       for(int i=0;i<n;i++){
        cin >> v[i] ;
        s.insert(v[i]);
        if(s.size() == k && c ){
            store = i;c = 0;
        }
    }
    if(k > s.size()) {cout << -1 << ' ' << -1;return;}
    if(n == 1 || k == 1){cout << 1 << ' ' << 1;return;}
    set<int> a;
    for(int i = store ; i >=0 ; i--){
        a.insert(v[i]);
        if(a.size() == k){cout << i + 1 << ' ' << store + 1;return;}
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