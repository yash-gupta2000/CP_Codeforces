//Currently in Spain, But S is silent :|
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e5 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
int n=1, q;
double sum=0;
int a[N], bit[N];

void update(int idx, int val)
{
    while(idx<=N)
    {
        bit[idx]+=val;
        idx+=(idx&(-idx));
    }
}

int pref(int idx)
{
    int ans=0;
    while(idx>0)
    {
        ans+=bit[idx];
        idx-=(idx&(-idx));
    }
    return ans;
}

void solve()
{
    int q;
     cin>>q;
    while(q--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int x, a;
            cin>>a>>x;
            sum+=x*a;
            update(1, +x);
            update(a+1, -x);
        }
        else if(type==2)
        {
            int k;
            cin>>k;
            sum+=k;
            n++;
            update(n, k);
            update(n+1, -k);       
        }
        else
        {
            int store=pref(n);
            //int storex = pref(n-1);
            //cout<<"store "<<store<<" "<<sum<<" "<<storex<<" "<<n<<endl;
            sum-=store;
            update(n, -store);
            update(n+1, +store);
            n--;
        }
        double ans=sum/n;
        cout<<fixed<<setprecision(8)<<ans<<endl;
    }
}
 
int main()
{
    IOS;ll t = 1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}