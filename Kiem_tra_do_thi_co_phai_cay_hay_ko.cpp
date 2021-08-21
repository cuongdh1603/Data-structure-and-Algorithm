#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int n,check;
vector<vector<int>> G;
bool vs[mxn];
void init(){
    cin>>n;
    check = 0;
    G.clear();
    G.resize(mxn);
    memset(vs,false,sizeof(vs));
    int x,y;
    for(int i=1;i<n;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
}
void dfs(int u){
    vs[u] = true;
    for(auto i:G[u]){
        if(!vs[i])
            dfs(i);
    }
}
void solve(){
    for(int i=1;i<=n;i++){
        if(!vs[i]){
            check++;
            dfs(i);
        }
    }
    cout<<(check==1?"YES":"NO")<<endl;
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

4
1 2
1 3
2 4

4
1 2
1 3
2 3
*/
