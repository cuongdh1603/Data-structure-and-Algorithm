#include<bits/stdc++.h>
#define ll long long
#define mxn 100003
using namespace std;
ll mark[mxn],par[mxn];
ll n,m;
void init(){
    cin>>n>>m;
    for(ll i=0;i<mxn;i++) par[i] = i;
    memset(mark,0,sizeof(mark));
}
ll anc(ll x){
    if(par[x]==x) return x;
    else return par[x] = anc(par[x]);
}
void join(ll u,ll v){
    par[anc(u)] = anc(v);
}
void solve(){
    ll u,v,ans = 1;
    while(m--){
        cin>>u>>v;
        join(u,v);
    }
    for(ll i=0;i<mxn;i++){
         par[i] = anc(i);
         mark[par[i]]++;
         ans = max(ans,mark[par[i]]);
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        solve();
    }
}
/*
2

3 2

1 2

2 3

10 12

1 2

3 1

3 4

5 4

3 5

4 6

5 2

2 1

7 1

1 2

9 10

8 9
*/
