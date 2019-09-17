#include <bits/stdc++.h>
using namespace std;
 
// int t, n;
// string s, s1, ans;
 
int main ()
{
    int t;
	cin >> t;
	while (t--){
        int n;
        string s,s1,ans;
		cin >> n >> s;
		s1 = s;
		ans = s;
		sort(s1.begin(), s1.end());
		int id = 0;
		for (int i = 0;i < n;i++)
			if (s[i] == s1[id]){
				s[i] = 1;
				ans[i] = '1';
				id++;
			}
		for (int i = 0;i < n;i++)
			if (s[i] == s1[id]){
				s[i] = 1;
				ans[i] = '2';
				id++;
			}
		if (id != n) ans = "-"; 
		cout << ans << endl;
	}
}