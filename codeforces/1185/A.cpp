#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll x,y,z,d;
    ll first,second,ans;
    cin>>x>>y>>z>>d;
    if (x < y) {
   if (z < x) swap(x,z);
} else {
  if (y < z) swap(x,y);
  else swap(x,z);
} 
if(z<y) swap(y,z);

if(y-x>=d)
{
    first=0;
}
else
{
    first= d-(y-x);
}

if(z-y>=d)
{
    second=0;
}
else
{
    second= d-(z-y);
}

ans=first+second;
cout<<ans;
}