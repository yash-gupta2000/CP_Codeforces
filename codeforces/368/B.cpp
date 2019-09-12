#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn for(int i=0;i<int(n);i++)

int main()
{
    ll n,m;
    cin>>n>>m;
    set<int> s;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n;i>0;i--)
    {
        s.insert(a[i-1]);
        b[i-1] = s.size();
    }
    while(m--)
    {
        int input;cin>>input;
        cout<<b[input-1]<<endl;
    }
    
}