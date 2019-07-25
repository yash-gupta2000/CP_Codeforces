#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[200009],b[200009];

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n,k,ans=0;
		scanf("%d%d", &n, &k);
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &a[i]);
			if (a[i] % 2 == 1)
			{
				ans++;
				b[ans] = i;
			}
		}
		if ((ans - k) % 2 != 0 || (ans-k)<0) printf("NO\n");
		else
		{
			printf("YES\n");
			for (int i = 1; i <= k-1; i++)
				printf("%d ", b[i]);
			printf("%d\n", n);
		}
	}
 
 
	return 0;
}