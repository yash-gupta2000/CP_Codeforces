//Currently in Spain, But S is silent :|
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e5 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
int dx[8]={+1, +1, +1, 0, 0, -1, -1, -1};
int dy[8]={+1, 0, -1, +1, -1, +1, 0, -1};
set<pair<int,int>> visited,seg;
map<pair<int,int>,int> level;
void solve()
{
     int xi,yi,xf,yf;
     cin>>xi>>yi>>xf>>yf;
     int n;cin>>n;

     for(int j=0;j<n;j++){
         int row,a,b;cin>>row>>a>>b;
         for(int i=a;i<=b;i++){
             seg.insert(mp(row,i));
         }
     }
     level[{xf,yf}] = -1;
     queue<pair<int,int>> q;
     q.push({xi,yi});
     //Apply BFS
     while(!q.empty()){
         pair<int,int> now = q.front();
         q.pop();
         for(int i=0;i<8;i++){
             pair<int,int> curr = {now.first + dx[i],now.second+dy[i]};
             if(seg.find(curr)!=seg.end() && visited.find(curr)==visited.end()){
                 level[curr] = level[now]+1;
                 visited.insert(curr);
                 q.push(curr);
             }
         }
     }
     cout<<level[{xf,yf}]<<endl;


}
 
int main()
{
    IOS;ll t = 1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}