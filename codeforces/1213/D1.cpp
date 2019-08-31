#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        v.push_back(input);
    }

    vector<vector<int>> vi(2000*100+11);
    for(int i=0;i<n;i++)
    {
        int x = v[i];
        int cur=0;
        while(x>0)
        {
            vi[x].push_back(cur);
            x /= 2;
            cur++;
        }

    }
    int ans = 1e9;
	for (int i = 0; i <= 200 * 1000; ++i) 
    {
		sort(vi[i].begin(), vi[i].end());
		if (int(vi[i].size()) < k) continue;
		ans = min(ans, accumulate(vi[i].begin(), vi[i].begin() + k, 0));
	}
	
	cout << ans << endl;
	
	return 0;
    
}