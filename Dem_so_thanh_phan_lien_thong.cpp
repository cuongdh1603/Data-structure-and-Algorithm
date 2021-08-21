#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int v,e,ans;
vector<vector<int>> G;
vector<bool> check;
void init(){
    cin>>v>>e;
    G.clear();
    G.resize(mxn);
    check.resize(mxn);
    for(int i=0;i<mxn;i++) check[i] = false;
    int x,y;
    while(e--){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
}
void dfs(int u){
    check[u] = true;
    for(auto i:G[u]){
        if(!check[i]){
            dfs(i);
        }
        //else return;
    }
}
void solve(){
    ans = 0;
    for(int i=1;i<=v;i++){
        if(!check[i]){
            ans++;
            dfs(i);
        }
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
1

6 6
1 2 1 3 2 3 3 4 3 5 4 5
*/
