#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > G;
vector<bool> check;
void bfs(int k){
    int u;
    deque<int> dq;
    cout<<k<<' ';
    dq.push_back(k);
    check[k] = true;
    while(dq.size()){
        u = dq.front();
        dq.pop_front();
        for(auto v:G[u]){
            if(!check[v]){
                check[v] = true;
                cout<<v<<' ';
                dq.push_back(v);
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int v,e,u;
        cin>>v>>e>>u;
        G.clear();
        G.resize(v+1);
        check.resize(v+1);
        for(int i=0;i<=v;i++) check[i] = false;
        int x,y;
        while(e--){
            cin>>x>>y;
            G[x].push_back(y);
        }
        bfs(u);
        cout<<endl;
    }
}
