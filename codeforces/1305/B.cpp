 
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
     string s;cin>>s;
     vector<int> v;
     int j = s.size()-1;
     //int cnt = 0;
     for(int i=0;i<j;)
     {
         if(s[i]=='(' && s[j]==')')
         {
             //cout<<"1st"<<endl;
             v.pb(i);
             v.pb(j);
             i++;j--;
         }
         else if(s[i]=='(' && s[j]=='(')
         {
             //cout<<"2nd"<<endl;
             j--;
         }
         else
         {
             //cout<<"3rd"<<endl;
             i++;
         }   
     }
     if(v.size()==0)
     {
         cout<<"0"<<endl;
         return;
     }
     else 
     {
         cout<<"1"<<endl;
         cout<<v.size()<<endl;
         sort(v.begin(),v.end());
         for(auto it:v)
         {
             cout<<it+1<<" ";
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
    // cin>>t;
    rep(test,1,t)
    {
        solve();
    }
    
    auto stop = chrono::high_resolution_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start); 
    // cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}