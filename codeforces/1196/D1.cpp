#include<bits\stdc++.h>
using namespace std;
const int maxn=2e5+5;
int a[maxn],b[maxn],c[maxn];
int main()
{
    const string s1="RGB";
    const string s2="GBR";
    const string s3="BRG";
    int q;
    scanf("%d",&q);
    while (q--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        string s;
        cin>>s;
        a[0]=0;
        b[0]=0;
        c[0]=0;
        int ans1=n,ans2=n,ans3=n;
        for (int i=0;i<n;i++)
        {
            if (s1[i%3]==s[i])
                a[i+1]=a[i];
            else
                a[i+1]=a[i]+1;
            if (s2[i%3]==s[i])
                b[i+1]=b[i];
            else
                b[i+1]=b[i]+1;
            if (s3[i%3]==s[i])
                c[i+1]=c[i];
            else
                c[i+1]=c[i]+1;
        }
        for (int i=0;i+k<=n;i++)
        {
            ans1=min(a[i+k]-a[i],ans1);
            ans2=min(b[i+k]-b[i],ans2);
            ans3=min(c[i+k]-c[i],ans3);
        }
        printf("%d\n",min(min(ans1,ans2),ans3));
    }
}