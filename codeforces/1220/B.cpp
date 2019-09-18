#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    vector<ll> mat[n];

    for(int i = 0; i < n ;i++) {
        for(int j = 0; j < n ; j++) {
            ll x;
            cin>>x;
            mat[i].push_back(x);
        }
    }

    vector<ll> ans(n);
    ll uu = mat[0][1] * mat[1][2];
    uu = uu / mat[0][2];
    ans[1] = sqrt(uu);
    ans[0] = mat[0][1] / ans[1];

    for(int i = 2; i < n ; i++) {
        ans[i] = mat[i][0] / ans[0];
    }

    for(int i = 0; i < n ; i++) {
        cout<<ans[i] <<" ";
    }
    return 0;
}