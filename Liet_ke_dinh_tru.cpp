#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int v,e,ans,u;
vector<vector<int>> G;
vector<int> top,a;
bool vs[mxn];
void init(){
    cin>>v>>e;
    u = 0;
    G.clear();
    top.clear();
    a.clear();
    G.resize(mxn);
    memset(vs,false,sizeof(vs));
    int x,y;
    set<int> st;
    while(e--){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
        u = max(u,max(x,y));
        if(st.find(x)==st.end()){
            top.push_back(x);
            st.insert(x);
        }
        if(st.find(y)==st.end()){
            top.push_back(y);
            st.insert(y);
        }
    }
    sort(top.begin(),top.end());
}
void dfs(int u){
    vs[u] = true;
    for(auto i:G[u]){
        if(!vs[i]){
            dfs(i);
        }
    }
}
void connected(){
    ans = 0;
    for(int i=1;i<=v;i++){
        if(!vs[i]){
            ans++;
            dfs(i);
        }
    }
    //cout<<ans<<endl;
}
void dfs2(int u,int x){
    vs[u] = true;
    for(auto i:G[u]){
        if(!vs[i]&&i!=x){
            dfs2(i,x);
        }
    }
}
void check(int x){
    int c = 0;
    memset(vs,false,sizeof(vs));
    for(int i=1;i<=v;i++){
        if(!vs[i]&&i!=x){
            c++;
            dfs2(i,x);
        }
    }
    if(c>ans) a.push_back(x);
}
void findTop(){
    for(int i=0;i<top.size();i++){
        check(top[i]);
    }
    for(int i=0;i<a.size();i++) cout<<a[i]<<' ';
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        connected();
        findTop();
    }
}
/*
1

5 5

1 2 1 3 2 3 2 5 3 4
*/
/*------------------------------------------------------*/

/*
#include<bits/stdc++.h>
#define mxn 1003
#define ii pair<int,int>
using namespace std;
int v,e,lt,lt1;
vector<vector<int>> G,tmp;
vector<bool> vs;
void dfs(int x){
    vs[x] = true;
    for(auto i:G[x]){
        if(!vs[i]){
            dfs(i);
        }
    }
}
void dfs1(int x,int y){
    vs[x] = true;
    for(auto i:G[x]){
        if(!vs[i]&&i!=y){
            dfs1(i,y);
        }
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int v,e;
        cin>>v>>e;
        lt = 0;
        G.clear();
        G.resize(v+1);
        vs.clear();
        vs.resize(v+1,false);
        int x,y;
        while(e--){
            cin>>x>>y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            if(!vs[i]){
                lt++;
                dfs(i);
            }
        }
        for(int i=1;i<=v;i++){
            vs.clear();
            vs.resize(v+1,false);
            lt1 = 0;
            for(int j=1;j<=v;j++)
                if(!vs[j]&&j!=i){
                    lt1++;
                    dfs1(j,i);
                }
            if(lt1>lt) cout<<i<<' ';
        }
        cout<<endl;
    }
}
*/
