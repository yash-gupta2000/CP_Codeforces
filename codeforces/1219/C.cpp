 
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
     int l; cin >> l;
	string a; cin >> a;
	int n = a.size();
	if (n % l != 0) {
		n = 1 + (n - 1) / l;
		string w(l, '0');
		w[0] = '1';
		while (n--) cout << w;
		cout << endl;
		return;
	}
 
	string w = a.substr(0, l);
    //cout<<w<<endl;
	string ww;
	for (int i = 0; i < n; i += l) ww += w;

    //cout<<ww<<endl;
 
	if (ww <= a) {
		for (int i = l - 1; i >= 0; i--) {
			if (w[i] == '9') {
				w[i] = '0';
			} else {
				w[i]++;
				break;
			}
		}
        //cout<<w<<endl;
		if (w[0] == '0') {
            //cout<<"ran"<<endl;
			w[0] = '1';
			n += l;
		}
        //cout<<n<<endl;
        //cout<<w<<endl;
 
		ww = "";
		for (int i = 0; i < n; i += l) ww += w;
	}
 
	cout << ww << endl;
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