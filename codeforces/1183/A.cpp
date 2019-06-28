#include <bits/stdc++.h>

using namespace std;


int sum(int n) {
    int ans = 0;
    while (n > 0) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    while (sum(n) % 4 != 0) {
        n++;
    }
    cout << n << endl;
}