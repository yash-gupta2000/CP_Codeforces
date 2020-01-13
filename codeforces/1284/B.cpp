#include <bits/stdc++.h>
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
using namespace std;
using lint = long long;
using pi = pair<int, int>;
 
vector<pi> pr;
 
int main(){
	int n; scanf("%d",&n);
	lint ans = 1ll * n * n;
	for(int i=0; i<n; i++){
		int m; scanf("%d",&m);
		vector<int> v(m);
		for(int i=0; i<m; i++) scanf("%d",&v[i]);
		reverse(all(v));
		if(is_sorted(all(v))){
			pr.emplace_back(v[0], v.back());
		}
	}
    // for(auto it:pr)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    //cout<<sz(pr)<<endl;
	sort(all(pr));
	for(int i=0; i<sz(pr); i++){
        //cout<<*pr.end()<<endl;
		ans -= pr.end() - lower_bound(all(pr), pi(pr[i].second, 0));
        //cout<<ans<<endl;
	}
	cout << ans << endl;
}