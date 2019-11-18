 
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
const int N=1e6+10;
long long int blocksize,a[N],res[N],cur_answer,occur[N];
vector<pair<pair<int,int>,int> > vp;
bool check(pair<pair<int,int>,int> x,pair<pair<int,int>,int> y){
    int block_x = x.first.first/blocksize;
    int block_y = y.first.first/blocksize;
    if(block_x!=block_y)
        return block_x<block_y;
    return x.first.second<y.first.second;
}
inline void update(int val){
    cur_answer-=occur[val]*occur[val]*val;
    occur[val]--;
    cur_answer+=occur[val]*occur[val]*val;
}
inline void update1(int val){
    cur_answer-=occur[val]*occur[val]*val;
    occur[val]++;
    cur_answer+=occur[val]*occur[val]*val;
} 
void solve()
{
     long long int n,left=1,right=0,rt,lt,q,x,y;
    scanf("%I64d%I64d",&n,&q);
    blocksize=sqrtl(n);
    for(int i=1;i<=n;++i)
        scanf("%I64d",&a[i]);
    for(int i=1;i<=q;++i){
        scanf("%I64d%I64d",&x,&y);
        vp.push_back({{x,y},i});
    }
    sort(vp.begin(),vp.end(),check);
    for(auto i:vp){
        lt=i.first.first;
        rt=i.first.second;
        while(right<rt){
            right++;
            update1(a[right]);
        }
        while(right>rt){
            update(a[right]);
            right--;
        }
        while(left<lt){
            update(a[left]);
            left++;
        }
        while(left>lt){
            left--;
            update1(a[left]);
        }
        res[i.second]=cur_answer;
    }
    for(int i=1;i<=q;++i)
        printf("%I64d\n",res[i]);
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
