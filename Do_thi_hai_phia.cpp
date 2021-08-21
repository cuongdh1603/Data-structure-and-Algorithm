#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int n,m,ok;
vector<vector<int>> G;
int vs[mxn],color[mxn];
void visit(int u){
    vs[u] = 1;
    for(auto i:G[u])
        if(!vs[i]){
            color[i] = 3 - color[u];
            visit(i);
        }
        else if(color[i]==color[u]) ok = 0;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n>>m;
        G.clear();
        G.resize(n+1);
        memset(vs,0,sizeof(vs));
        memset(color,0,sizeof(color));
        int u,v;
        while(m--){
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        ok = 1;
        for(int i=1;i<=n;i++)
            if(!vs[i]){
                color[i] = 1;
                visit(i);
            }
        cout<<(ok?"YES":"NO")<<endl;
    }
}
/*
2

5 4

1 5

1 3

2 3

4 5

3 3

1 2

1 3

2 3
*/
