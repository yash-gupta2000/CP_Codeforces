            #include <bits/stdc++.h>
            #include <ext/pb_ds/assoc_container.hpp>
            #include <ext/pb_ds/tree_policy.hpp>
            using namespace std;
            using namespace __gnu_pbds;
            #define rep(i,a,b) for(ll i =a; i<b;++i)
            #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
            #define endl "\n"
            #define pb push_back
            #define F first
            #define S second
            #define print(a)       for(auto x : a) cout << x << " "; cout << endl
            #define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
            #define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
            #define mk(x,y)  make_pair(x,y)
            typedef  long long int ll;
            const ll N =  1e6+ 5 ;
            const ll mod = 1e9+7;
            const ll inf = 1e18+10;
            ll  x, n  , a[N] , even[N] , odd[N] ;
    ll pow_mod_m(ll a , ll n)
    {
        if(!n)
            return 1;
        ll pt =  pow_mod_m(a,n/2);
        pt *= pt , pt %= mod;
        if(n&1)
            pt *= a  ,pt %= mod;
        return pt;
    }

    int main()
    {
         IOS;
         int ts =1;
         cin >> ts ;
         while(ts--)
         {
            cin >> n ;
            ll sum = 0;
            rep(i,0,n )
            {
                cin >> a[i];
                odd[i] = 0 ,even[i] = 0;
                if(i % 2 == 0) sum += a[i];
            }
            for(int i =0 ; 2*i+1 < n; i++)
            {
                even[i] = a[2*i+1] - a[2*i];
            }
            for(int i = 0 ; 2*i+2 < n; i++)
            {
                odd[i] = a[2*i+1] -  a[2*i+2];
            }
          ///  print2( even , 0 , (n-1)/2+1);
          ///  print2( odd,  0 , (n-1)/2+1);
            ll mx = 0 ,sofar = 0;
            rep(i,0,(n-1)/2 +1)
            {
                sofar += even[i];
                if(sofar > mx)
                {
                    mx = sofar;
                }
                if(sofar < 0)
                {
                    sofar  = 0;
                }
            }
            sofar = 0;
            rep(i,0,(n-1)/2 +1)
            {
                sofar += odd[i];
                if(sofar > mx)
                {
                    mx = sofar;
                }
                if(sofar < 0)
                {
                    sofar  = 0;
                }
            }
         ///   cout << "mx is : " << mx << endl;
            cout << sum + mx << endl;
         }
    }