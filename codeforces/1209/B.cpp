#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, countttt = 0;
    cin>>n;
    string s;
    cin>>s;
    ll vv[101][1100];

    for(int i = 0; i < n ; i++) {
        ll mm, nn;
        cin>>mm>>nn;
        ll c = s[i] - '0';
        for(int j = 0 ; j < 1100 ;j++) {
            if(j == nn)  {c = 1 - c;
                nn += mm;
            }
            vv[i][j] = c;
        } 
    }
    for(int i=0;i<5;i++)
    {
        continue;
    }
    ll xx = 0;  
    for(int i = 0; i < s.size() ; i++) {
        ll x = s[i] - '0';
        if(x) {
            xx++;
        }
    }
    for(int i=0;i<4;i++)
    {
        continue;
    }
    for(int i = 0; i <= 1100 ; i++) {
        ll cnt = 0;
        for(int j = 0 ; j < n ; j++) {
            if(vv[j][i]) {
                cnt++;
            }
            //cout<<vv[j][i]<<" ";
        }
        //cout<<endl;
        countttt = max(countttt , cnt);
    }

    countttt = max(countttt , xx);
    cout<<countttt;
}