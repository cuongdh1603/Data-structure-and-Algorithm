#include<bits/stdc++.h>
using namespace std;
int v,e,s,t,d;
vector<vector<int>> G;
vector<bool> check;
vector<int> pt;
void init(){
    cin>>v>>e>>s>>t;
    G.clear();
    G.resize(v+1);
    check.resize(v+1);
    pt.resize(v+1);
    for(int i=0;i<=v;i++) check[i] = false;
    int x,y;
    while(e--){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
}
void pathBfs(int u,int t){
    //if(check[t]) return;
    check[u] = true;
    deque<int> dq;
    dq.push_back(u);
    while(dq.size()){
        int v = dq.front();
        dq.pop_front();
        if(check[t]) break;
        for(auto i:G[v]){
            if(!check[i]){
                pt[i] = v;
                check[i] = true;
                dq.push_back(i);
            }
        }
    }
}
void Result(){
    if(!check[t]) cout<<-1;
    else{
        vector<int> ans;
        int u = t;
        while(u!=s){
            ans.push_back(u);
            u = pt[u];
        }
        ans.push_back(s);
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
    }
    cout<<endl;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        init();
        pathBfs(s,t);
        Result();
    }
}
/*
7

6  9 1 6
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

6  9 2 6
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

6  9 3 6
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

6  9 4 6
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

6  9 2 5
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

6  9 2 4
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

6  9 3 5
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
*/
