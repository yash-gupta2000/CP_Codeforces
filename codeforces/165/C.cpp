#include <bits/stdc++.h>
using namespace std;

char S[1000001];
long long a, k, s, C[1000001];

int main() {
	cin >> k >> S;
	C[0] = 1;
	for (int i = 0; S[i]; ++i) {
		s += S[i] == '1';
		++C[s];
	}
	for (int i = k; i <= s; ++i) {
		if (k == 0) {
			a += (C[i] - 1) * C[i] / 2;
		} else {
			a += C[i] * C[i - k];
		}
	}
	cout << a << endl;
	return 0;
}