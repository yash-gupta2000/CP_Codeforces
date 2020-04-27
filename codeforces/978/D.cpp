 
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
    vector<int> v[3];
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v[0].pb(x);
        v[1].pb(x-1);//decrement
        v[2].pb(x+1);//increment
    }
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    int ans=INT_MAX;
    for(int i=0;i<3;i++)
    {
        int rootelmt = v[i][0];
        //cout<<"First row se choose hua "<<rootelmt<<endl;
        //cout<<endl;
        for(int ii=0;ii<3;ii++)
        {
            bool flag = false;
            int res=0;
            //cout<<v[ii][1]<<endl;
            int diff = v[ii][1]-rootelmt;
            //cout<<"Difference is "<<diff<<endl;
            int elmt = v[ii][1];
            //cout<<"Ab element is "<<elmt<<endl;
            if(i!=0)
            {
                res++;
            }
            if(ii!=0)
            {
                res++;
            }
            for(int j=2;j<n;j++)
            {
                //cout<<"Ghusa"<<endl;
                //cout<<v[0][j]<<" "<<v[1][j]<<" "<<v[2][j]<<endl;
                if(v[0][j]-elmt == diff)
                {
                    //cout<<"1st"<<endl;
                    elmt = v[0][j];
                }
                else if(v[1][j]-elmt == diff)
                {
                    //cout<<"2nd"<<endl;
                    res++;
                    elmt = v[1][j];
                }
                else if(v[2][j]-elmt == diff)
                {
                    //cout<<"3rd"<<endl;
                    res++;
                    elmt = v[2][j];
                }
                else
                {
                    flag = true;
                    res=0;
                    break;
                }  
            }
            //cout<<"Abhi ka answer is "<<res<<endl;
            if(!flag && res==0)
            {
                cout<<"0"<<endl;
                return;
            }
            if(res!=0)
            {
                ans = min(res,ans);
            }
            //cout<<endl;
        }
        //cout<<endl;
    }
    if(ans==INT_MAX)
    {
        cout<<"-1"<<endl;
        return;
    }
    cout<<ans<<endl;
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