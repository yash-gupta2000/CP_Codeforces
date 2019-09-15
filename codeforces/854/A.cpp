#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, x, y; cin >> n;
    for(int i = 1; i * 2 < n; i++) {
        if(__gcd(i, n - i) == 1){
            x = i;
            y = n - i;
        }
    }
    cout << x << ' ' << y << '\n';
    return 0;
}