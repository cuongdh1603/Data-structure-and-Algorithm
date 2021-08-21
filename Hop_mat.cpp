//please do it by myself!!!

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


int n,m,k;
vi adj[1001];
bool used[1001];
map<int,int> ma;

void dfs(int u){
	used[u]=true;
	ma[u]++;
	for(int x : adj[u]){
		if(!used[x])
			dfs(x);
	}
}

void inp(){
	cin>>k>>n>>m;
	vi init(k);
	FOR(i,0,k){
		cin>>init[i];
	}
	FOR(i,0,m){
		int x,y;cin>>x>>y;
		adj[x].pb(y);
	}
	for(int x:init){
		ms(used,false);
		dfs(x);
	}
	int ans = 0;
	for(auto it :ma){
		if(it.se==k){
			++ans;
		}
	}
	cout<<ans<<endl;
}


int main(){
	int t;t=1;
	while(t--){
		inp();
	}
}

