#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int v,e,ans;
vector<vector<int>> G;
vector<int> top,a;
bool vs[mxn];
void init(){
    cin>>v>>e;
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
void bfs(int u){
    vs[u] = true;
    deque<int> dq;
    dq.push_back(u);
    while(dq.size()){
        int k = dq.front();
        dq.pop_front();
        for(auto i:G[k]){
            if(!vs[i]){
                vs[i] = true;
                dq.push_back(i);
            }
        }
    }
}
void connected(){
    ans = 0;
    for(int i=1;i<=v;i++){
        if(!vs[i]){
            ans++;
            bfs(i);
        }
    }
}
void bfs2(int u,int x){
    vs[u] = true;
    deque<int> dq;
    dq.push_back(u);
    while(dq.size()){
        int k = dq.front();
        dq.pop_front();
        for(auto i:G[k]){
            if(!vs[i]&&i!=x){
                vs[i] = true;
                dq.push_back(i);
            }
        }
    }
}
void check(int x){
    int c = 0;
    memset(vs,false,sizeof(vs));
    for(int i=1;i<=v;i++){
        if(!vs[i]&&i!=x){
            c++;
            bfs2(i,x);
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
