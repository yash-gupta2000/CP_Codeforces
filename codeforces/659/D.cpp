 
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
	for(int i=0; i<n+1; i++){
		cin>>x[i]>>y[i];
	}
	int cnt=0;
	for (int i=0;i<n-1;i++){
		if (y[i+1] < y[i] and (x[i+2] > x[i+1])){
			cnt++;
		}
		else if (x[i+1] > x[i] and (y[i+2] > y[i+1])){
			cnt++;
		}
		else if (y[i+1] > y[i] and (x[i+2] < x[i+1])){
			cnt++;
		}
		else if (x[i+1] < x[i] and (y[i+2] < y[i+1])){
			cnt++;
		}
	}
    //cout<<"643";
	cout << cnt;   
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