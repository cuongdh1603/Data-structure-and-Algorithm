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
int n;
map<string, int> ma;
vector<pi> adj[101];
vector<pair<string,int>> res;
map<int,string> convert;

bool cmp(pair<string,int> a, pair<string,int> b){
	if(a.se!=b.se)
		return a.se>b.se;
	return a.fi<b.fi;
}

void bfs(){
	queue<pi> q;
	q.push({1,100});
	while(!q.empty()){
		pi top = q.front();
		q.pop();
		for(pi x : adj[top.fi]){
			res.pb({convert[x.first],top.se-x.se});
			q.push({x.first,top.se-x.se});
		}
	}
}

void inp(){
	cin>>n;
	ma["Ted"] = 1;
	convert[1] = "Ted";
	int cnt = 1;
	FOR(i,0,n){
		string a,b;cin>>a>>b;
		int t;cin>>t;
		if(!present(ma,a)) ma[a] = ++cnt,convert[cnt]=a;
		if(!present(ma,b)) ma[b] = ++cnt,convert[cnt]=b;
		//cout<<ma[a]<<" "<<ma[b]<<endl;
		adj[ma[a]].pb({ma[b],t});
	}

	bfs();
	sort(all(res),cmp);
	for(auto it : res){
		cout<<it.fi<<" "<<it.se<<"\n";
	}
	res.clear();
	convert.clear();
	ma.clear();
	for(int i=1;i<=n;i++) adj[i].clear();
}


int main(){
	int t;cin>>t;
	for(int i=1;i<=t;i++){
		cout<<"DATASET "<<i<<endl;
		inp();
	}
}
*/
