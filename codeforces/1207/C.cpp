#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 9e18+9;


int main()
{
    ll q;cin>>q;
    while(q--)
    {
    vector<vector<ll>> dp(200000+100, vector<ll>(2 , 0));
    ll n , a ,b;
    cin>>n>>a>>b;
    char c;
    dp[0][0] = b;
    //cout<<dp[0][0]<<endl;
    dp[0][1] = inf;
    for(int i = 0 ; i < n ; i++) {
        cin>>c;
        //cout<<c<<" ";
        if(c == '0') {
            dp[i + 1][1] = min(dp[i][0] + 2 * (a + b) , dp[i][1] + a + 2 * b);
            dp[i + 1][0] = min(dp[i][1] + 2 * a + b, dp[i][0] + a + b);
            //dp[i + 1][1] = min(dp[i+1][1] , dp[i][1] + a + 2 * b);
            //dp[i + 1][0] = min(dp[i+1][0] , dp[i][0] + 2 * a + b);
        } else {
            dp[i+1][1] = dp[i][1] + 2 * b  + a;
            dp[i+1][0] = inf;
        }
    }
 
    cout<<dp[n][0]<<endl;
}
    }
