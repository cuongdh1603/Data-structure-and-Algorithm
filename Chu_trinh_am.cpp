#include <bits/stdc++.h>
using namespace std;
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int n,m;
vector<pi> adj[1001];

void inp(){
	cin>>n>>m;
	FOR(i,0,m){
		int x,y,w;cin>>x>>y>>w;
		adj[x].pb({y,w});
		//adj[y].pb({x,w});
	}
}

void bellmanFord(int u){
	vi d(n+1,INF);
	d[u]=0;
	for(int i=0;i<n-1;i++){
		for(int u =1;u<=n;u++){
			for(pi x : adj[u]){
				d[x.fi] = min(d[x.fi], d[u]+x.se);
			}
		}
	}
	bool ok = false;
	for(int i=1;i<=n;i++){
		for(pi x: adj[i]){
			if(d[x.fi] > d[i] + x.se){
				ok=true;break;
			}
		}
	}
	cout<<(ok ? "1\n" : "0\n");
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		bellmanFord(1);
		FOR(i,1,n+1) adj[i].clear();
	}
}

