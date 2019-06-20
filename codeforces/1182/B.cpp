#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	char a[555][555];
	int n,m,i,j,x,y,z;
	while(~scanf("%d%d",&n,&m))
	{
		int s=0,d=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='*')
				{
						s++;					
				}			
			}
		}
		if(n==1&&m==1)
		{
			printf("NO\n");
			continue;
				}		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i][j]=='*'&&a[i-1][j]=='*'&&a[i+1][j]=='*'&&a[i][j-1]=='*'&&a[i][j+1]=='*')
				{
				    x=i;y=j;
				}
			}
		}
		int z=0;
		for(i=0;i<n;i++)
		{
			if(a[i][y]=='*'&&z==0)
			{
				d++;
				if(a[i+1][y]!='*')
				{
					z++;
				}
			}			
		}
		z=0;
		for(j=0;j<m;j++)
		{
			if(a[x][j]=='*'&&z==0)
			{
				d++;
				if(a[x][j+1]!='*')
				{
					z++;
				}
			}			
		}		
		if(d==s+1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}			
	}
}