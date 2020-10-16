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
//ll res;
//Taken from @Skgen
int vec[2001][11];
ll n;
string res = "";
int dp[2005][2005][11];
 
int find_sol(int idx , int k , int num) {
    if(idx == n) {
        if(k == 0) {
            return dp[idx][k][num] = 1;
        } else {
            return dp[idx][k][num] = 0;
        }
    }
 
    if(k < 0) {
        return dp[idx][k][num] = 0;
    }
 
    if(dp[idx][k][num] != -1) {
        return dp[idx][k][num];
    }
 
    int sol = 0;
    for(int i = 9; i >= 0;i--) {
        int cc = vec[idx][i];
        
        if(cc != -1 && cc <= k) {
            sol = max(sol , find_sol(idx + 1, k - cc , i));
        }
    }
 
    return dp[idx][k][num] = sol;
}
 
void findans(int idx , int k) {
    if(idx == n) {
        return;
    }
 
    for(int i = 9 ; i >= 0 ; i--) {
        int cc = vec[idx][i];
        if(cc != -1 && k - cc >=0 && dp[idx+1][k - cc][i] == 1) {
            char ch = i+ 48;
            res += ch;
            findans(idx + 1, k - cc);
            return;
        }
    }
}
 
void solve() {
    ll k;
    cin>>n>>k;
    mem(dp, -1);
    string num[10] = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
 
    for(int i = 0; i < n; i++) {
        string s;
        cin>>s;
        for(int j = 0; j < 10 ; j++) {
            int cnt = 0;
            for(int k = 0; k < 7 ; k++) {
                if(s[k] != num[j][k]) {
                    if(s[k] == '1') {
                        cnt = -1;
                        break;
                    } else {
                        cnt++;
                    }
                }
            }
            vec[i][j] = cnt;
        }
    }
    int xx = find_sol(0, k , 0);
    if(!xx) {
        cout<<-1<<"\n";
        return;
    }
    findans(0 , k);
    cout<<res<<"\n";
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