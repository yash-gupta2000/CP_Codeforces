#include<bits/stdc++.h>
#define fe first
#define se second
#define ll long long
using namespace std;
const int N = 5e3 + 5;
pair<int, pair<int, int> > a[N];
int dp[N];
int last[N];
void getPath(int x){
    if(last[x] == 0){
        cout << a[x].se.se << " ";
        return;
    }
    getPath(last[x]);
        cout << a[x].se.se << " ";
}
int main()
{
    ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, w, h;
    cin >> n >> w >> h;
    for(int i = 1; i <= n; i++){
        cin >> a[i].fe >> a[i].se.fe;
        a[i].se.se = i;
    }
    sort(a + 1, a + n + 1);
    int maxi = 0, who = -1;
    for(int i = 1; i <= n; i++){
        if(a[i].fe <= w || a[i].se.fe <= h){
            dp[i] = 0;
            continue;
        }
        else{
            dp[i] = 1;
        }
        for(int j = 1; j < i; j++){
            if(a[j].fe < a[i].fe && a[j].se.fe < a[i].se.fe){
                if(dp[j] + 1 > dp[i]){
                    dp[i] = dp[j] + 1;
                    last[i] = j;
                }
            }
        }
        if(dp[i] > maxi){
            maxi = dp[i], who = i;
        }
    }
    if(maxi == 0)
        return cout << maxi, 0;
    cout << maxi << "\n";
    getPath(who);
return 0;
}