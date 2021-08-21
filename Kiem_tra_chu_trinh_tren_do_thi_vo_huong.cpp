#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int v,e,check;
vector<vector<int>> G;
bool vs[mxn];
void init(){
    cin>>v>>e;
    G.clear();
    check = 0;
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
    vector<int> lv(mxn,0);
    dq.push_back(u);
    int lev = 1;
    lv[u] = lev;
    vs[u] = true;
    while(dq.size()){
        int k = dq.front();
        dq.pop_front();
        for(auto i:G[k]){
            if(!vs[i]){
                vs[i] = true;
                dq.push_back(i);
                lv[i] = lv[k]+1;
            }
            else if(lv[k]>1){
                if(lv[i]!=lv[k]-1){
                    check = 1;
                    break;
                }
            }
        }
        if(check) break;
    }
}
void solve(){
    for(int i=1;i<=v;i++){
        memset(vs,false,sizeof(vs));
        bfs(i);
        if(check) break;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        solve();
        cout<<(check?"YES":"NO")<<endl;
    }
}
/*
1

6 9
1 2
1 3
2 3
2 5
3 4
3 5
4 5
4 6
5 6

4 4
1 2
1 3
2 4
3 4

7 6
1 2
1 3
2 6
2 7
3 4
3 5


*/
