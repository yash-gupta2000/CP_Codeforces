 
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
     LL n,k;
     cin>>n>>k;
    //  i64 n, K;
	//cin >> n >> K;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
 
	int ans=n, e=1;
	for(int i = 1; i < n; i++) {
		if(a[i-1]==a[i]) {
			e++;
		} else if(a[i-1] + k >= a[i]) {
			ans -= e;
			e=1;
		} else {
			e=1;
		}
	}
	cout << ans << endl;
	return ;
    //  sort(v.begin(),v.end());
    //  for(int i=0;i<n;i++)
    //  {
    //      if(s[i]+k>=v[i+1] && v[i]<v[i+1])
    //      {
    //          v.erase(v.begin()+i);
    //      }  
    //  }
    // set<LL> :: iterator itr,it;
    // for(itr = s.begin(),it=s.begin();itr!=s.end();itr++)
    // {
    //     if(*itr+k  > *(itr++) && *itr < *(itr++))
    //     {
    //         s.erase(itr);
    //     }
    // }

    // cout<<s.size()<<end

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