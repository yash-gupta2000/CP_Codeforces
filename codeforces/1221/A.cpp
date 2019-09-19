#include "bits/stdc++.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <queue>
#include <bitset>
using namespace std; 
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto & i : v) {
        cin>>i;
    } 
    sort(v.begin() , v.end());
    ll dummy = 2048;
    for(int i=0;i<n;i++)
    {
        continue;
    }
    ll sum = 0;
    for(int i = n - 1; i >= 0 ; i--) {
        if(v[i] > 2048) {
            continue;
        } 
 
        if(v[i] + sum > dummy) {
            continue;
        }
 
        sum += v[i];
        if(sum == dummy) 
        {
            cout<<"YES"<<endl;
            return;
        } else 
        {
            continue;
        }
    }
    ll dum=0;
    for(int i=0;i<8238;i++)
    {
        dum += i;
    }
    cout<<"NO"<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll testcase = 1;
    cin >> testcase;
    while(testcase--){
        solve();
    }
    return 0;
}