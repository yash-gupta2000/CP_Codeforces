 
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
     if(n==1){
         cout<<"! 1"<<endl;
         return;
     }
     vector<int> res(n+1);
     for(int i=0;i<=n;i++){
         res[i] = -1;
     }
     int current_max_pos = 1;
     for(int cur_pos=2;cur_pos<=n;cur_pos++){
         int one_two;
            int two_one;
            cout << "? " << cur_pos << " " << current_max_pos << endl; //n
            cin >> two_one;
            cout << "? " << current_max_pos << " " << cur_pos << endl; //n
            cin >> one_two;
            if (two_one < one_two) {
                res[current_max_pos - 1] = one_two;
                current_max_pos = cur_pos;
            } else {
                res[cur_pos - 1] = two_one;
            }
     }
     cout<<"!"<<" ";
     for(int i=0;i<n;i++){
         if(res[i] == -1){
             cout<<n<<" ";
         }
         else{
             cout<<res[i]<<" ";
         }
     }
     cout<<endl;
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