#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> G;
int v,e;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>v>>e;
        G.clear();
        G.resize(v+1);
        while(e--){
            int x,y;
            cin>>x>>y;
            G[x].push_back(y);
        }
        for(int i=1;i<=v;i++){
            cout<<i<<": ";
            sort(G[i].begin(),G[i].end());
            for(int j=0;j<G[i].size();j++) cout<<G[i][j]<<' ';
            cout<<endl;
        }
    }
}
