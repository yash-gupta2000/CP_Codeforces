/*
author: Yash Gupta
*/
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

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    bool clock = true;
    bool anti = true;
    for(int i=0;i<s.size();i++){
        if(s[i] == '>'){
            clock = false;
        }
        else if(s[i]=='<'){
            anti = false;
        }
    }
    if(clock || anti){
        cout<<n<<endl;
        return;
    }
    else{
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='-' || s[(i+1)%n]=='-'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
 
int main()
{
    IOS;ll t = 1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}