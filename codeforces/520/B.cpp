#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
 
  int steps = 0;
  while (m > n) {
    if (m % 2 == 0) {
      m = m / 2;
    } else {
      m += 1;
    }
    steps++;
  }
 
  steps += n-m;
  cout << steps;
  return 0;
}