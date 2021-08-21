//please do it by myself!!!
#include<bits/stdc++.h>
using namespace std;
int v,e,m,ans,color[12];
vector<vector<int>> G;
bool paint(int u,int a){
    for(auto i:G[u]){
        if(a==color[i]) return false;
    }
    return true;
}
void Try(int u){
    if(u==v+1) ans = 1;
    else{
        for(int i=1;i<=m;i++){
            if(paint(u,i)){
                color[u] = i;
                Try(u+1);
            }
        }
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        memset(color,0,sizeof(color));
        cin>>v>>e>>m;
        G.clear();
        G.resize(v+1);
        int x,y;
        while(e--){
            cin>>x>>y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        ans = 0;
        Try(1);
        cout<<(ans?"YES":"NO")<<endl;
    }
}
