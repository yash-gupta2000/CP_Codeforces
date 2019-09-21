 
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
#define rep(i,s,e) for(long long i=s;i<e;i++)
#define brep(i,s,e) for(long long i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int x[10000];
int y[10000];

void solve()
{
    int n;
	cin>>n;
    int a[n];
    vector<pair<int,int>> p ;
	for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i] = x;
        p.push_back(make_pair(x,i));
    }
    sort(p.begin(),p.end());
    sort(a,a+n);
    reverse(a,a+n);
    reverse(p.begin(),p.end());
    int cost=0;
    for(int i=0;i<n;i++)
    {
        cost +=  (a[i]*i)+1;
    }
    cout<<cost<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<p[i].second+1<<" ";
    }
    
}
 
int main()
{
    DANGER;
    ofstream out("output.txt");
 
    auto start = chrono::high_resolution_clock::now();
    
    LL t = 2;
    // cin>>t;
    rep(test,1,t)
    {
        solve();
    }
    
    auto stop = chrono::high_resolution_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start); 
    // cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}