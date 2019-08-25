#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a,b,n;
// ll fib(ll num)
// {
//   if(num==0)
//   {
//     return a;
//   }
//   else if(num==1)
//   {
//     return b;
//   }
//   else
//   {
//     return (fib(n-1)^fib(n-2));
//   }
  
// }
int main()
{
  ll q;
  cin>>q;
  while(q--)
  {
    cin>>a>>b>>n;
    ll c = a^b;
    if(n%3==2)
    {
      cout<<c<<endl;
    }
    else if(n%3==1)
    {
      cout<<b<<endl;
    }
    else
    {
      cout<<a<<endl;
    }
    

  }
}