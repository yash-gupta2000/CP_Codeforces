#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll n;
  cin>>n;
  int l = -1,r = -1;
  bool flagx=true;
  vector<ll> a,b;
  for(int i=0;i<n;i++)
  {
    int input;cin>>input;
    a.push_back(input);
  }
  for(int i=0;i<n;i++)
  {
    b.push_back(a[i]);
  }
  sort(b.begin(),b.end());
  for(int i=0;i<n-1;i++)
  {
    if(a[i]<a[i+1])
    {
    //	cout<<"ewbkfe";
      continue;
      //flagx=true;
    }
    else
    {
    //	cout<<"sdfs";
      flagx= false;
      l=i;
      break;
    }
    
  }
  if(flagx)
  {
  	
  	cout<<"yes\n";
  	cout<<"1 1";
  	return 0;
  }
  for(int j=l;j<n-1;j++)
  {
    if(a[j]>a[j+1])
    {
      continue;
    }
    else
    {
      r = j;
      break;
    }
  }
  if(r == -1)
  {
  	r=n-1;
  }
 // cout<<l<<" "<<r<<endl;
  reverse(a.begin()+l,a.begin()+r+1);
  //for(int i=0;i<n;i++)
  //{
  //	cout<<a[i]<<" ";
  //}
  //cout<<endl;
  if(a==b)
  {
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;;
  }
  else
  {
    cout<<"no"<<endl;
  }
  

}