#include<bits/stdc++.h>
#define mxn 100003
using namespace std;
int n,ans = 0;
vector<int> G[mxn];
bool vs[mxn];
void init(){
    cin>>n;
    for(int i=1;i<=n;i++) G[i].clear();
    memset(vs,false,sizeof(vs));
    int x,y;
    n--,ans = 0;
    while(n--){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
}
void dfs(int v,int level){
    vs[v] = true;
    ans = max(ans,level);
    for(auto i:G[v]){
        if(!vs[i]){
            dfs(i,level+1);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        dfs(1,0);
        cout<<ans<<endl;
    }
}
