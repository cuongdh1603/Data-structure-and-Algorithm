#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int n,m,u;
typedef pair<int,int> ii;
vector<ii> ans;
vector<vector<int>> G;
bool vs[mxn];
void init(){
    cin>>n>>m>>u;
    G.clear();
    ans.clear();
    G.resize(mxn);
    memset(vs,false,sizeof(vs));
    int x,y;
    while(m--){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
}
void dfs(int v){
    vs[v] = true;
    for(auto i:G[v]){
        if(!vs[i]){
            ans.push_back({v,i});
            dfs(i);
        }
    }
}
void searchDfs(){
    dfs(u);
    int check = 1;
    for(int i=1;i<=n;i++){
        if(!vs[i]){
            check = 0;
            break;
        }
    }
    if(check){
        for(int i=0;i<ans.size();i++)
            cout<<ans[i].first<<' '<<ans[i].second<<endl;
    }
    else cout<<-1<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        searchDfs();
    }
}
/*
2

4 4 2
1 2
1 3
2 4
3 4

4 2 2
1 2
3 4
*/
