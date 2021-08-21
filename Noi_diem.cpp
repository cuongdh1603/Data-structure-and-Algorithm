//please do it by myself!!!
/*
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
int parent[1001];
int size[1001];

int find(int x){
	if(x==parent[x])
		return x;
	return parent[x] = find(parent[x]);
}

bool Union(int x, int y){
	x = find(x);
	y = find(y);
	if(x==y)
		return false;
	if(size[x] < size[y])
		swap(x,y);
	parent[y] = x;
	size[x]+=size[y];
	return true;
}


double euclidDistance(double x1, double y1, double x2, double y2){
	return sqrt((pow(x1-x2,2) + pow(y1-y2,2)));
}


void inp(){
	cin>>n;
	FOR(i,1,n+1){
		parent[i] = i;
		size[i]=1;
	}
	vector<pair<double,double>> v(n);
	for(int i=0;i<n;i++){
		double x, y; cin>>v[i].fi>>v[i].se;
	}
	vector<pair<double, pi>> edge;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			edge.pb(mp(euclidDistance(v[i].fi,v[i].se,v[j].fi,v[j].se),mp(i+1,j+1)));
		}
	}
	sort(all(edge));
	double mst_cost = 0;
	for(auto it  :edge){
		int u = it.se.fi;
		int v = it.se.se;
		if(Union(u,v)){
			mst_cost += it.fi;
		}
	}
	cout<<fixed<<setprecision(6)<<mst_cost<<endl;
}

int main(){
	int t;cin>>t;
	while(t--){
		inp();
	}
}
*/
