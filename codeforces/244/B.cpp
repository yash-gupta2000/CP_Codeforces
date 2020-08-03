
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

set<int> s;
void solve()
{
	int n;
	cin >> n;
	for (int i = 0; i <= 9; i++)
		for (int j = 0; j <= 9; j++)
			for (int k = 0; k < pow(2, 9); k++)
			{
				vector<int> num;
				int t = k;
				while (t)
				{
					num.push_back(t % 2);
					t /= 2;
				}
				int ans = 0;
				for (int l = num.size()-1; l >= 0; l--)
				{
					if (num[l])
						ans = ans * 10 + i;
					else
						ans = ans * 10 + j;
				}

				if (ans != 0 && ans <= n)
					s.insert(ans);
			}
	if (n == 1e9)
		s.insert(1e9);
	cout << s.size() << endl;
	return;
}

int main()
{
	DANGER;
	ofstream out("output.txt");

	auto start = chrono::high_resolution_clock::now();

	LL t = 1;
	// cin>>t;
	rep(test, 1, t)
	{
		solve();
	}

	auto stop = chrono::high_resolution_clock::now();
	// auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
	// cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}