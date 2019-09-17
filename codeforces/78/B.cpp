#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char res[100000];

int main()
{

res[0] = 'R';
res[1] = 'O';
res[2] = 'Y';
res[3] = 'G';
res[4] = 'B';
res[5] = 'I';
res[6] = 'V';
int n;
cin >> n;
for(int i=0;i<7;i++)
{
    cout<<res[i]<<"";
}
for (int i = 7; i < n; ++i) 
    {
        res[i] = res[i - 4];
        cout<<res[i]<<"";
    }


}