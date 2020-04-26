#include <bits/stdc++.h>
using namespace std;
  
const int N=1e6+5;
 
int n, elem, len=0;
int a[N];
map<int, int> ans;
 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		ans[a[i]]=ans[a[i]-1]+1;
        //cout<<a[i]<<" "<<ans[a[i]]<<" "<<a[i]-1<<" "<<ans[a[i]-1]<<endl;
		if(ans[a[i]]>len)
		{
			len=ans[a[i]];
			elem=a[i];
		}
	}
	cout<<len<<endl;
    //cout<<elem<<endl;
	elem=elem-len+1;//to bring to the start of the array.
    //cout<<elem<<endl;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==elem)
		{
			cout<<i<<" ";
			elem++;
		}
	}
    //cout<<endl;
    // for(auto it:ans)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
	return 0;
}