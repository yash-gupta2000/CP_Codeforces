 
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
 
typedef long long ll;

 
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
     ll n,k;
 
    cin>>n>>k;
 
    ll a[n],i;
 
    for(i=0;i<n;i++)  
        cin>>a[i];
    
    pair<ll,ll>p[n];
    map<ll,ll>m;
 
    for(i=0;i<n;i++)
    {
        p[i].first=a[i];
        p[i].second=i;
        m[a[i]]++;
    }
 
    sort(p,p+n);
 
    ll b[n];
 
    for(i=n-1;i>=0;i--)
    {
        b[p[i].second]=(i)-(m[p[i].first]-1);
        m[p[i].first]--;
    }
 
    // for(i=0;i<n;i++)
    //     cout<<b[i]<<" ";
    // cout<<endl;
    while(k--)
    {
        ll x,y;
        cin>>x>>y;
 
        x--;
        y--;
 
        if(a[x]>a[y])
        {
            b[x]--;
        }
        else if(a[x]<a[y])
            b[y]--;
    }
 
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
}
 
int main()
{
    DANGER;
    ofstream out("output.txt");
 
    auto start = chrono::high_resolution_clock::now();
    
    ll t = 1;
    // cin>>t;
    rep(test,1,t)
    {
        solve();
    }
    
    auto stop = chrono::high_resolution_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start); 
    // cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}