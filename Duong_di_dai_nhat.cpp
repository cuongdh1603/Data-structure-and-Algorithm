#include<bits/stdc++.h>
#define ll long long
#define mxn 21//default size
using namespace std;
int n,m,max_d;
int G[mxn][mxn];//presenting a graph of the input
bool vs[mxn][mxn];//presenting the state between a pair of vertex.
void Try(int u,int v){
    for(int i=0;i<n;i++){
        if(!vs[i][u]&&G[i][u]){
            vs[i][u] = vs[u][i] = true;
            max_d = max(max_d,v+1);
            Try(i,v+1);
            vs[i][u] = vs[u][i] = false;
        }
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n>>m;
        max_d = 0;
        memset(G,0,sizeof(G));
        memset(vs,false,sizeof(vs));
        int u,v;
        while(m--){
            cin>>u>>v;
            G[u][v] = G[v][u] = 1;
        }
        for(int i=0;i<n;i++) Try(i,0);
        cout<<max_d<<endl;
    }
}


