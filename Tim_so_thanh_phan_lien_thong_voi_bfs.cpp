#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int v,e,ans;
vector<vector<int>> G;
bool vs[mxn];
void init(){
    cin>>v>>e;
    ans = 0;
    G.clear();
    G.resize(mxn);
    memset(vs,false,sizeof(vs));
    int x,y;
    while(e--){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
}
void bfs(int u){
    deque<int> dq;
    dq.push_back(u);
    vs[u] = true;
    while(dq.size()){
        int v = dq.front();
        dq.pop_front();
        for(auto i:G[v]){
            if(!vs[i]){
                vs[i] = true;
                dq.push_back(i);
            }
        }
    }
}
void solve(){
    for(int i=1;i<=v;i++){
        if(!vs[i]){
            ans++;
            bfs(i);
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

6  6

1 2 1 3 2 3 3 4 3 5 4 5
*/
