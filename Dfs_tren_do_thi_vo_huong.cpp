#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> G;
vector<bool> check;
int v,e,u;
void dfs(int u){
    check[u] = true;
    cout<<u<<' ';
    for(auto i:G[u]){
        if(!check[i]){
            dfs(i);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>v>>e>>u;
        G.clear();
        G.resize(v+1);
        check.clear();
        check.resize(v+1,false);
        while(e--){
            int x,y;
            cin>>x>>y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        dfs(u);
        cout<<endl;
    }
}

