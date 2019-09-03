#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

const int N = 2 * 1e5 + 10;
const ll inf = 9e18 + 9; 
 
ll res;

typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > pi;

//Definitions//
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define S second
#define F first

void solve()
{
    int n,sum=0;
    cin>>n>>sum;
    int a[n] , b[n];
    for(int i=0;i<n;i++)
    {
        a[i] = 9;
        b[i] = 0;
    }
    int sumx = n*9;
    //cout<<sumx<<endl;
    int rem = sumx-sum;
    //cout<<rem<<endl;
    b[0] = 1;
    if((sum <= 0 && n != 1 )|| sum > sumx)
    {
        cout<<"-1"<<" "<<"-1";
    }
    else
    {
    if(sum == 0) {
        for(int i = 0 ; i < n ; i++) {
            cout<<0;
        }
        cout<<" ";
        for(int i = 0 ; i < n ; i++) {
            cout<<0;
        }
        return;
    }
    while(rem!=0)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(rem>8)
            {
                a[i] = 0;
                rem -= 9;
            }
            else
            {
                a[i] = 9-rem;
                // cout<<a[i]<<endl;
                // cout<<"2nd"<<endl;
                rem = 0;
                break;
            }  
        }
    }
    ll temp = sum - 1;

    while(temp) {
        for(int i = n - 1; i > 0 ; i--) {
            if(temp >= 9) {
                b[i] = 9;
                temp -= 9;
                continue;
            } else if(temp == 0) {
                break;
            } else if(temp) {
                b[i] = temp;
                temp = 0;
            }
        }

        if(temp) {
            b[0] += temp;
            temp = 0;
        }
    }

    for(int i = 0 ; i < n ; i++) {
        cout<<b[i];
    }
    cout<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    }
    

}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

