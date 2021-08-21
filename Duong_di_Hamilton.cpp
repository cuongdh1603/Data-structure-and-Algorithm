//Please do it by myself!!!
#include<bits/stdc++.h>
#define mxn 13
using namespace std;
int v,e,ex,vs[mxn];
vector<int> G[mxn];
void hamilton(int u,int a){
    if(a==v){
        ex = 1;
        return;
    }
    for(auto i:G[u]){
        if(!vs[i]){
            vs[i] = 1;
            hamilton(i,a+1);
            vs[i] = 0;
        }
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>v>>e;
        for(int i=0;i<=v;i++) G[i].clear();
        memset(vs,0,sizeof(vs));
        int x,y;
        ex = 0;
        while(e--){
            cin>>x>>y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            vs[i] = 1;
            hamilton(i,1);
            vs[i] = 0;
            if(ex) break;
        }
        cout<<ex<<endl;
    }
}
/*
2
4 4
1 2 2 3 3 4 2 4
4 3
1 2 2 3 2 4
*/
