//               luCk == KiSmAt == lUcky
#include "bits/stdc++.h"
using namespace std;

typedef long long  ll;
const int N= 1 << 21;    

ll a[N];
ll seg[4 * N];
ll flag;

ll build(ll str, ll end, ll node, ll reki){
    if(str == end){
        seg[node] = a[str];
        return seg[node];
    }
    ll m = str + end >> 1;
    if(reki){ 
        seg[node] = build(str, m, node * 2, reki ^ 1) | build(m + 1, end, node * 2 + 1, reki ^ 1);
    }
    else{
        seg[node] = build(str, m, node * 2, reki ^ 1) ^ build(m + 1, end, node * 2 + 1, reki ^ 1);
    }
    return seg[node];
}

void update(ll str, ll end, ll node, ll idx, ll val, ll reki){
    if(str == end){
        seg[node] = val;
    }
    else{
        ll m = str + end >> 1;
        if(str <= idx and idx <= m){
            update(str, m, node * 2, idx, val, reki ^ 1);
        }
        if(m < idx and idx <= end){
            update(m + 1, end, node * 2 + 1, idx, val, reki ^ 1);
        }
        if(reki){
            seg[node] = seg[node * 2] | seg[node * 2 + 1];
        }
        else{
            seg[node] = seg[node * 2] ^ seg[node * 2 + 1];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, q, idx, val, reki;
    cin >> n >> q;
    reki = (n & 1);
    n = 1 << n; 
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    build(1, n, 1, reki);
    while(q--){
        cin >> idx >> val;
        update(1, n, 1, idx, val, reki);
        cout << seg[1] << "\n";
    }
    return 0;
}