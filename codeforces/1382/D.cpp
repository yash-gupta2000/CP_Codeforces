#include<bits/stdc++.h>
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define inf 10000000000000
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
using namespace std;
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
int Mod(int x, int m){ return (x%m+m)%m;}
int min(int a,int b){return a<b?a:b;}
int max(int a,int b){return a>b?a:b;}
int32_t main()
{

    fastio;
    int t;
    cin>>t;
    while(t--)
    {
       int n,m;
       cin>>n;
       int arr[2*n];
       
       for(int i=0;i<2*n;i++){
         	cin>>arr[i];
	   }
	   set<int,greater<int>>s;
	   for(int i=1;i<=2*n;i++){
	   	  s.insert(i);
	   }
	   vector<int>v;
	   int sz = 0;

	   
	   
	   for(int i=2*n-1;i>=0;i--){
	   	     int x = arr[i];
				//cout<<x<<" "<<*s.begin()<<endl;
			
	   	     if(*s.begin()==x){
					//cout<<"rav1"<<endl;
	   	        sz++;
	   	        s.erase(s.begin());
	   	        v.pb(sz);
	   	        sz = 0;
			 }
			 else{
				 //cout<<"rav2"<<endl;
			 	sz++;
			 	s.erase(x);
			 }
	   }
	//    for(auto it:v){
	// 	   cout<<it<<" ";
	//    }
	//    cout<<endl;
	   m = v.size();
		bool dp[n+1];
		memset(dp,false,sizeof dp);
		dp[0] = true;
		for(auto it:v){
			for(int i=n;i>0;i--){
				if(i>=it){
					dp[i] = dp[i] || dp[i-it];
				}
			}
		}
		if(dp[n]==true){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	   
    }
  return 0;


}



/*
                                                 -----*** SEGMENT TREE ***--------

int st[1000001];
void updateValue(int arr[], int ss, int se,
                 int index, int value, int node)
{
    if (index < ss || index > se)
    {
        cout << "Invalid Input" << endl;
        return;
    }

    if (ss == se)
    {
        arr[index] = value;
        st[node] = value;
    }
    else {
            int mid =  ss+(se-ss)/2;

            if (index >= ss && index <= mid)
                updateValue(arr,  ss, mid, index,
                            value, 2 * node + 1);
            else
                updateValue(arr,  mid + 1, se,
                            index, value, 2 * node + 2);

            st[node] = max(st[2 * node + 1],
                       st[2 * node + 2]);
    }
    return;
}
int RMQUtil( int ss, int se, int qs, int qe, int index)
{
    if (qs <= ss && qe >= se)
        return st[index];

    if (se < qs || ss > qe)
        return inf;

    int mid = ss+(se-ss)/2;
    return min(RMQUtil( ss, mid, qs, qe, 2*index+1),
                RMQUtil( mid+1, se, qs, qe, 2*index+2));
}


void constructSTUtil(int arr[], int ss, int se,
                                 int si)
{



    if (ss == se)
    {

        st[si] = arr[ss];
        return;

    }

    int mid = ss+(se-ss)/2;
    //cout<<mid<<endl;
    constructSTUtil(arr, ss , mid, 2*si +1);
	constructSTUtil(arr, mid+1, se,2*si +2);
	st[si]  = min(st[2*si+1],st[2*si+2]);

}
                                                     ----***SPARSE TABE***-----

O(1) query sparse matrix for Max/Min/GCD

int RMQ[20][N];

void precompute()
{
	for(int i=0;(1<<i)<N;i++)
	{
		for(int j=(1<<i);j<N && j<(1<<(i+1)); j++)
			floorlog[j]=i;
	}

	for(int i=n;i>=1;i--)
	{
		RMQ[0][i]=dp[i];
		int mxj=floorlog[n-i+1]; //2^j <= n-i+1
		int pw=1;
		for(int j=1;j<=mxj;j++)
		{
			RMQ[j][i]=max(RMQ[j-1][i], RMQ[j-1][i+pw]);
			pw<<=1;
		}
	}
}

int getMax(int L, int R)
{
	int k=floorlog[R-L+1]; //2^k <= R-L+1
	return max(RMQ[k][L], RMQ[k][R - (1<<k) +1]);
}





                                                      ----*** NCR ***-------
int nCr(int n, int r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
	}
    else
        p = 1;
    return p;
}




                                           ------*** print divisors 1 to n ***-------
vector<int> printDivisors(int n)
{
    vector<int>v;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {

            if (n/i == i)
                v.pb(i);

            else
                v.pb(i),v.pb(n/i);
        }
    }
    return v;
}





                                                     ------*** isPrime ***--------------
//check if a number is prime   O(sqrt(n))
bool isPrime(int n)
{

    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}






                                                ------*** prime factorization *** -------------
const int MAXN = 100000;
int spf[MAXN];
// spf contains smallest prime factor of n
void sieve()
{   spf[1] = 1;
    for (int i=2; i<MAXN; i++)
       spf[i] = i;

    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (int i=3; i*i<MAXN; i++)
    {

        if (spf[i] == i)
        {

            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

 A O(log n) function returning primefactorization
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}



                                                                GRAPHS



                                                 -----*** TOPOLOGICAL SORT ***--------

vector<int> order; //Stores the Topological Order
vector<int>g[10];
bool toposort(int n) //Returns 1 if there exists a toposort, 0 if there is a cycle
{
	queue<int> q;
	vector<int> indeg(n + 1, 0);
	for(int i = 1; i <= n; i++)
		for(auto &it:g[i])
			indeg[it]++;
	for(int i = 1; i <= n; i++)
	{
		if(!indeg[i])
			q.push(i);
	}
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		order.push_back(u);
		for(auto &v:g[u])
		{
			indeg[v]--;
			if(!indeg[v])
				q.push(v);
		}
	}
	return (order.size() == n);
}




                                                  -----***cycle detection in directed graph***-----
bool findLoop(int v)
{
	if(vis[v]==1)
		return 1;
	if(vis[v]==2)
		return 0;
	vis[v]=1;
	for(auto &it:g[v])
	{
		if(findLoop(it))
			return 1;
	}
	vis[v]=2;
	return 0;
}

bool checkLoop()
{
	fill(vis+1, vis+n+1, 0);
	for(int i=1;i<=n;i++)
	{
		if(!vis[i] && findLoop(i))
			return 1;
	}
	return 0;
}




                                                 -------*** FLOYD WARSHALL ***----
                                                 All Pairs Shortest Path problem in 0(n^3)


int dist[N][N];

void FloydWarshall()
{
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				dist[i][j]=min(dist[i][j], dist[i][k] + dist[k][j]);
}


                                                 ---**** Dijkstra with Path ***------

int arrival[N], departure[N], vis[N], parent[N];
vector<pair<int, int> > g[N];

void dijkstra(int source, int destination)
{
	for(int i=1;i<=n;i++)
	{
		arrival[i]=1e18;
		departure[i]=1e18;
		vis[i]=0;
	}
	arrival[source]=0;
	set<pair<int, int> > s;
	s.insert({0, source});
	while(!s.empty())
	{
		auto x = *(s.begin());
		s.erase(x);
		vis[x.second]=1;
		departure[x.second]=arrival[x.second];
		for(auto it:g[x.second])
		{
			if(arrival[it.first] > departure[x.second] + it.second)
			{
				s.erase({arrival[it.first], it.first});
				arrival[it.first]=departure[x.second] + it.second;
				s.insert({arrival[it.first], it.first});
				parent[it.first]=x.second;
			}
		}
	}
	if(!vis[destination])
	{
		cout<<"-1";
		return;
	}
	int v=destination;
	vector<int> ans;
	while(parent[v])
	{
		ans.push_back(v);
		v=parent[v];
	}
	ans.push_back(source);
	reverse(ans.begin(), ans.end());
	for(auto it:ans)
		cout<<it<<" ";
}

-------------------------------------------------------------------------------------------------------------------------------------
                                                -------*** Simple Dijkstra: ***--------

int arrival[N][N], departure[N][N];
vector<pair<int, int> > g[N];

void dijkstra(int source, int destination, int arrival[], int departure[])
{
	for(int i=1;i<=n;i++)
	{
		arrival[i]=inf;
		departure[i]=inf;
	}
	arrival[source]=0;
	set<pair<int, int> > s;
	s.insert({0, source});
	while(!s.empty())
	{
		auto x = *(s.begin());
		s.erase(x);
		departure[x.second]=arrival[x.second];
		for(auto it:g[x.second])
		{
			if(arrival[it.first] > departure[x.second] + it.second)
			{
				s.erase({arrival[it.first], it.first});
				arrival[it.first]=departure[x.second] + it.second;
				s.insert({arrival[it.first], it.first});
			}
		}
	}
}

					                               ------*** SCC IN DIRECTED GRAPH KOSARAJU'S ***------

/// grp -> now of groups
/// g ->  directed graph
///rg ->  reverse directed graph
/// undirg -> undirected graph
///comp -> stores grp number of nodes
///sz -> stores size of groups
///todo -> toposort of graph



const int N = 1e5 + 5;
int n,m;
int grp = 0;
vector<int>g[N],rg[N],undirg[N],todo;
int comp[N],sz[N];
bool vis[N];

void sccaddedge(int u,int v){
	g[u].pb(v);
	rg[v].pb(u);
}
void dfs(int node){
	vis[node] = true;
	for(auto x:g[node]){
		if(!vis[x]){
			dfs(x);
		}
	}
	todo.pb(node);
}
void dfs2(int node,int val){
	comp[node] = val;
	sz[val]++;
	for(auto x:rg[node]){
		if(comp[x]==-1){
			dfs2(x,val);
		}
	}
}
void scc(){

	for(int i = 1; i <= n; i++)
		comp[i] = -1;

	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
		}
	}

	reverse(all(todo));
	for(auto it:todo){
		if(comp[it]==-1){
			dfs2(it,++grp);
		}
	}
}
                                                          --------*** KRUKSHAL MST ***-----------

//// g is origninal graph
//// adj is the MST graph
//// cost contain min cost

const int N = 2e5+5;
struct data1
{
	int u, v, w, idx;
};
int n, m;
int connected;
int root[N], sz[N];
vector<pair<int, int>> g[N];
vector<pair<int,int>>adj[N];
data1 edges[N];
void init()
{
	for(int i=1;i<=n;i++)
	{
		root[i]=i;
		sz[i]=1;
	}
	connected=n;
}
int rt(int k)
{
	while(k!=root[k])
	{
		root[k]=root[root[k]];
		k=root[k];
	}
	return k;
}

void merge(int u, int v)
{
	int rt1=rt(u);
	int rt2=rt(v);

	if(rt1==rt2)
		return;

	connected--;

	if(sz[rt1]>sz[rt2])
		swap(rt1, rt2);

	sz[rt2]+=sz[rt1];
	sz[rt1]=0;
	root[rt1]=root[rt2];
}

void add_edge(int idx, int u, int v, int w)
{
	g[u].push_back({v, w});
	g[v].push_back({u, w});
	edges[idx].u = u;
	edges[idx].idx = idx;
	edges[idx].v = v;
	edges[idx].w = w;

}

bool comp(data1 &d1, data1 &d2)
{
	return d1.w < d2.w;
}

int kruskalMST()
{
	init();
	int cost=0;
	sort(edges+1, edges+m+1, comp);
	for(int i=1;i<=m;i++)
	{
		int u=edges[i].u, v=edges[i].v, w=edges[i].w;
		int rt1=rt(u), rt2=rt(v);
		if(rt1==rt2)
			continue;
		else
		{
			cost+=w;
			adj[u].pb(mp(v,w));
			adj[v].pb(mp(u,w));
			merge(rt1, rt2);
		}
	}
	return cost;
}

                                                         ------- *** BINARY LIFTING LCA IN logn ***---------

int n, l;
vector<vector<int>> adj;

int timer;
vector<int> tin, tout;
vector<vector<int>> up;

void dfs(int v, int p)
{
    tin[v] = ++timer;
    up[v][0] = p;
    for (int i = 1; i <= l; ++i)
        up[v][i] = up[up[v][i-1]][i-1];

    for (int u : adj[v]) {
        if (u != p)
            dfs(u, v);
    }

    tout[v] = ++timer;
}

bool is_ancestor(int u, int v)
{
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u, int v)
{
    if (is_ancestor(u, v))
        return u;
    if (is_ancestor(v, u))
        return v;
    for (int i = l; i >= 0; --i) {
        if (!is_ancestor(up[u][i], v))
            u = up[u][i];
    }
    return up[u][0];
}

void preprocess(int root) {
    tin.resize(n);
    tout.resize(n);
    timer = 0;
    l = ceil(log2(n));
    up.assign(n, vector<int>(l + 1));
    dfs(root, root);
}


                                                          --------*** KMP SEARCH ***-----

vector<int> prefix_function(string &s)
{
	int n = s.size();
	vector<int> pi(n);
	for(int i = 1; i < n; i++)
	{
		int j = pi[i - 1];
		while(j > 0 && s[i] != s[j])
			j = pi[j - 1];
		if (s[i] == s[j])
			j++;
		pi[i] = j;
	}
	return pi;
}

vector<int> find_occurences(string &text, string &pattern)
{
	string cur = pattern + '#' + text;
	int sz1 = text.size(), sz2 = pattern.size();
	vector<int> v;
	vector<int> lps = prefix_function(cur);
	for(int i = sz2 + 1; i <= sz1 + sz2; i++)
	{
		if(lps[i] == sz2)
			v.push_back(i - 2 * sz2);
	}
	return v;
}


  1. always check for unintialized vector.

  2. priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > pq; for djikstra

  3. check for constrained properly

  4. 10^8 operations per second

  5. Every even integer greater than 2 can be expressed as the sum of two primes.

  6. odd number can be expresses in sum of two prime number only if (n-2) is prime.

  7. always pass string vector everything  by reference else can get MLe TLE;

  8. An even digits of pallindromic number is always divided by 11 euler project 4th question..

  9. lookup in a set is logn and in a vector is n

 10. We are given an undirected connected graph,
     it is necessary to orient its arc so as to obtain a strongly connected directed graph.
	 There is theorem (on a theoretical basis for a written task) that a graph admits an
	 orientation to a strongly connected digraph if and only if every edge is part of what a cycle.
	 and to find the orientation of edges just do a dfs and take all edges in the direction of dfs
	 if there is only one scc component then the graph is strongly connected

  If n = 12, the time complexity can be O(n!).
  If n = 25, the time complexity can be O(2n).
  If n = 100, the time complexity can be O(n4).
  If n = 500, the time complexity can be O(n3).
  If n = 10^4, the time complexity can be O(n2).
  If n = 10^6, the time complexity can be O(n log n).
  If n = 10^8, the time complexity can be O(n).
  If n > 10^8, the time complexity can be O(log n) or O(1).

*/



