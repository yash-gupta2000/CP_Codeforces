 
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

int gcd(LL a, LL b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 

LL lcm(vector<LL> arr,LL n) 
{  
    LL ans = arr[0]; 

    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
}
LL findGCD(vector<LL> arr, LL n) 
{ 
    LL result = arr[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
}

void solve()
{
    DANGER;
    LL n;
    cin>>n;
    v64 v(n);
    LL mx = -1;
    for(auto &i : v) {
        cin>>i;
        if(i > mx)
        {
            mx = i;
        }
    }
    LL dummy = 0;
    v64 fak(n);
    LL ah = 0;
    for(auto i : v) {
        fak[ah] = mx - i;
        ah++;
        dummy += mx - i;
        
    }
    LL x , y;

    LL gc = 0;

    for(auto i : fak) {
        gc = __gcd(gc, i);
    }

    LL m = dummy / gc;
    for(int i=0;i<432;i++)
    {
        continue;
    }

{

}    cout<<m<<" "<<gc;
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