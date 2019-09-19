#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    vector<int> v;
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<=m;i++)
    {
        int input;cin>>input;
        v.push_back(input);
    }
    int cnt=0;
    int test = v.back();
    for(int i=0;i<m;i++)
    {
        int dummy = test^v[i];
        ll flag = 0;
        while(dummy)
            {
                if(dummy&1)
                flag++;
                dummy = dummy>>1;
            }
        if(flag<=k)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;
}