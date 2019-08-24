#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, cnt = 0, j = 1;
    cin >> n;
    while (true)
    {
        int sum = 0;
        for (int i = 0; i <= j; i++)
        {
            sum += i;
        }
        n -= sum;
        if (n >= 0)
            cnt++;
        else
            break;
        j++;
    }
    cout << cnt << endl;
}