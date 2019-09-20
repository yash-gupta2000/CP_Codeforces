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
 
void solve()
{
    ll n;
    cin>>n;
 
    char s[n][n];
    
    for(int i = 0; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            s[i][j] = 'q';
        }
    }
 
    char x = 'W', y = 'B';
    if(n %2) {
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
            if(s[i][j] == 'q') {
                s[i][j] = x;
                swap(x, y);
            }
        }
    }
} else {
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n ;j ++) {
            if(s[i][j] == 'q') {
                s[i][j] = x;
                swap(x , y);
            }
        }
        swap(x , y);
    }
}
 
    for(int i = 0; i < n; i++) {
        for(int j =0 ; j < n; j++) {
            cout<<s[i][j];
        }
        cout<<endl;
    }
}
 
int main()
{
    ll testcase = 1;
    while(testcase--){
        solve();
    }
    return 0;
}