#include <bits/stdc++.h>
#define mxn 200005
using namespace std;
vector<int> List[mxn];
int n, dep[mxn];
long long dp[mxn], sub[mxn];
void dfs(int x){
    dp[x] = dep[x];
	sub[x] = 1;
	for(auto &i : List[x]){
		dfs(i);
		dp[x] += dp[i];
		sub[x] += sub[i];
	}
}
int main(){
	int i,x; cin>>n;
	for(i=2; i<=n; i++){
		int x;cin>>x;
		List[x].push_back(i);
		dep[i] = dep[x] + 1;
	}
	dfs(1);
	for(i=1; i<=n; i++)
		printf("%lld ", dp[i] - sub[i] * (dep[i] - 1));
}
