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
 
char another(char x, char y) {
    for (char r = 'a'; r <= 'z'; ++r)
        if (x != r && y != r)
            return r;
    return 'z';
}

void solve()
{
     int n, t;
    cin>>n>>t;
    string a, b;
    cin>>a>>b;
 
    vector<int> same, different;
    for (int i = 0; i < n; ++i)
        if (a[i] == b[i])
            same.push_back(i);
        else
            different.push_back(i);
 
    string out;
    out.resize(n);
    for (int i = 0; i < n; ++i)
        out[i] = another(a[i], b[i]);

    //cout<<out<<endl;
    //cout<<same.size()<<endl;
    //cout<<different.size()<<endl;
    while (t < n) {
        if (same.size() >= 1) {
            const int i = same.back();
            same.pop_back();
            out[i] = a[i];
            ++t;
        } else if (different.size() >= 2) {
            const int i = different.back();
            different.pop_back();
            const int j = different.back();
            different.pop_back();
            out[i] = a[i];
            out[j] = b[j];
            ++t;
        } else {
            cout<<"-1"<<endl;
            return ;
        }
    }
    cout<<out<<endl;
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