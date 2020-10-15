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
	string s;
	cin >> s;
	int freq[10];
	memset(freq, 0, sizeof freq);
	for (int i = 0; i < s.length(); i++)
	{
		freq[s[i] - '0']++;
	}
	int single_ans = -1;
	for (int i = 0; i < 10; i++)
	{
		single_ans = max(single_ans, freq[i]);
	}
	int res = s.size() - single_ans;
    /* We are bruteforcing subsequence of maximum length that can be formed with s.*/
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			bool flag = true;
			int len = 0;
			for (int k = 0; k < s.size(); k++)
			{
				if (flag && s[k] == i + '0')
				{
					flag = false;
					len++;
				}
				else if (!flag && s[k] == j + '0')
				{
					flag = true;
					len++;
				}
			}
            //If odd then it will contradict with equal right and left cyclic shifts.
			if (len % 2)
			{
				len--;
			}
			res = min(res, (int)s.size() - len);
		}
	}
	cout << res << endl;
}

int main()
{
	DANGER;
	ofstream out("output.txt");

	auto start = chrono::high_resolution_clock::now();

	LL t = 1;
	cin >> t;
	rep(test, 1, t)
	{
		solve();
	}

	auto stop = chrono::high_resolution_clock::now();
	// auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
	// cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}