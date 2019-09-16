#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ios  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
  
 
void uttar() 
{
  
      ll n;
      cin>>n;
      
      vector<ll>x(n);
      for(auto &i : x)
      {
          cin>>i;
      }
      sort(x.begin(),x.end());
      ll q;
      cin>>q;
      vector<ll>m(q);
      for(auto &i :m)
      {
          cin>>i;
          cout<<upper_bound(x.begin(),x.end(),i)-x.begin()<<endl;
      }
       
     
 
 
 
}
 
int main()
{  ios;
	ll t=1;
//	cin>>t;
	while(t--)
	{
		uttar();
	}
}