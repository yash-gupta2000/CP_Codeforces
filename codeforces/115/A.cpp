#include<bits/stdc++.h>
using namespace std;
int x[5000];

int dfs(int node)
{
  if(x[node]== -1)
  {
    return 1;
  }
  else
  {
    return 1 + dfs(x[node]);
  }
  
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
      cin>>x[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
      ans = max(ans,dfs(i));
    }

    cout<<ans<<endl;
    return 0;
}            
    
