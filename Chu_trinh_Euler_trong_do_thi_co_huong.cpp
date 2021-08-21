#include<bits/stdc++.h>
using namespace std;
#define mxn 1001
using namespace std;
int v,e,check,c;
vector<vector<int>> G;
bool vs[mxn];
int mark[mxn];
void init(){
    cin>>v>>e;
    G.clear();
    G.resize(mxn);
    memset(vs,false,sizeof(vs));
    memset(mark,0,sizeof(mark));
    int x,y;
    while(e--){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
        mark[x]--;
        mark[y]++;
    }
}
void dfs(int u){
    vs[u] = true;
    for(auto i:G[u]){
        if(!vs[i]) dfs(i);
    }
}
bool isConnected(){
    c = 0;
    for(int i=1;i<=v;i++){
        if(!vs[i]){
            c++;
            dfs(i);
        }
    }
    return c==1;
}
void solve(){
    check = 0;
    if(isConnected()){
    check = 1;
    for(int i=1;i<mxn;i++)
        if(mark[i]!=0){
            check = 0;
            break;
        }
    }
    cout<<check<<endl;
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

6  10

1 2 2 4 2 5 3 1 3 2 4 3 4 5 5 3 5 6 6 4

3 3

1 2 2 3 1 3
*/
