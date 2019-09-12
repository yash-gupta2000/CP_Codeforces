#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll findMaxOddSubarraySum(ll arr[], ll n) 
{ 
    ll min_odd = INT_MAX; 
    
    ll sum = 0;  // To store sum of all positive elements 
    for (int i=0 ; i<n ; i++) 
    { 
        // Adding positive number would increase 
        // the sum. 
        if (arr[i] > 0) 
            sum = sum + arr[i]; 
  
        // To find the minimum odd number(absolute) 
        // in the array. 
        if (arr[i]%2 != 0) 
        { 
            if (min_odd> abs(arr[i])) 
                min_odd = abs(arr[i]); 
        } 
    } 

    if (sum%2 == 0) 
        sum = sum - min_odd; 
  
    return sum; 
}
int main()
{
    
    ll n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans = findMaxOddSubarraySum(a,n);
    cout<<ans<<endl;
}

