#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int v,e,check;
vector<vector<int>> G;
bool vs[mxn];
void init(){
    cin>>v>>e;
    check = 0;
    G.clear();
    G.resize(mxn);
    memset(vs,false,sizeof(vs));
    int x,y;
    while(e--){
        cin>>x>>y;
        G[x].push_back(y);
        //G[y].push_back(x);
    }
}
void bfs(int u){
    deque<int> dq;
    dq.push_back(u);
    vs[u] = true;
    int c = 0;
    while(dq.size()){
        int k = dq.front();
        dq.pop_front();
        c++;
        for(auto i:G[k]){
            if(!vs[i]){
                vs[i] = true;
                dq.push_back(i);
            }
        }
    }
    if(c+dq.size()==v) check = 1;
}
void solve(){
    for(int i=1;i<=v;i++){
        memset(vs,false,sizeof(vs));
        bfs(i);
        if(check) break;
    }
    cout<<(check?"YES":"NO")<<endl;
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

6 9

1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6  3

4 4
1 2
1 3
4 3
4 2


*/
