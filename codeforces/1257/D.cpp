#include<bits/stdc++.h>
#define endl '\n'
#define int ll
#define INF 0x3f3f3f3f
using namespace std;
typedef long long ll;
const int N=2e5+10;
int a[N],b[N]; 
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin>>T;
	while(T--){
		int n,m;
		cin>>n;
		fill(b+1,b+1+n,0);
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cin>>m;
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y; 
			b[y]=max(b[y],x);
		}
		for(int i=n-1;i;i--){
			b[i]=max(b[i],b[i+1]);
		}
		int mx=0,ans=1;
		int j=1;
		for(int i=1;i<=n;i++){
            //cout<<"i "<<i<<endl;
			mx=max(mx,a[i]);
            //cout<<mx<<" "<<b[i-j+1]<<endl;
			if(mx>b[i-j+1]){
				ans++;
                //cout<<"Mx before "<<mx<<" ";
				mx=a[i];
                //cout<<"Mx after "<<mx<<" ";cout<<"j before "<<j<<" ";
				j=i;
                //cout<<"j after "<<j<<" ";

			}
			if(i==j&&mx>b[1]){
				ans=-1;
				break;
			}
            //cout<<endl<<endl;
		}
		cout<<ans<<endl;
	}
	return 0;
}
