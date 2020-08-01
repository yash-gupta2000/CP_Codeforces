
//It doesn't matter how slow you go, Unless you don't stop.
#include <iostream>
#include <algorithm>
#include <bitset>

#include <cmath>
#include <cstring>
#include <climits>

#include <deque>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

#include <fstream>
#include <chrono>
using namespace std;

typedef long long LL;
typedef pair<LL, LL> p64;
typedef vector<LL> v64;
typedef map<LL, LL> mp64;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, s, e) for (long long i = s; i <= e; i++)
#define brep(i, s, e) for (long long i = s; i >= e; i--)
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof(x))
#define DANGER                        \
	std::ios::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)

void solve()
{
	LL n;
	cin >> n;
	if (n <= 30)
		cout << "NO\n";
	else if (n == 36)
		cout << "YES\n"
			 << 15 << " " << 10 << " " << 6 << " " << 5 << endl;
	else if (n == 44)
		cout << "YES\n"
			 << 21 << " " << 10 << " " << 6 << " " << 7 << endl;
	else if (n == 40)
		cout << "YES\n"
			 << 15 << " " << 10 << " " << 6 << " " << 9 << endl;
	else
	{
		cout << "YES\n"
			 << 14 << " " << 10 << " " << 6 << " " << n - 30 << endl;
	}
}

int main()
{
	DANGER;
	ofstream out("output.txt");

	auto start = chrono::high_resolution_clock::now();

	LL t = 1;
	cin>>t;
	rep(test, 1, t)
	{
		solve();
	}

	auto stop = chrono::high_resolution_clock::now();
	// auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
	// cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}