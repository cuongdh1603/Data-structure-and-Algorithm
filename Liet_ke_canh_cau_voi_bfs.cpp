#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int v,e,ans;
vector<vector<int>> G,tmp;
bool vs[mxn];
typedef pair<int,int> ii;
vector<ii> ed,a;
/*
bool cmp(edge x,edge y){
    return x.U<y.U||(x.U==y.U&&x.V<y.V);
}
*/
void init(){
    cin>>v>>e;
    G.clear();
    ed.clear();
    a.clear();
    G.resize(mxn);
    memset(vs,false,sizeof(vs));
    int x,y;
    for(int i=0;i<e;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
        if(x>y) swap(x,y);
        ed.push_back({x,y});
    }
    sort(ed.begin(),ed.end());
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
void bfs2(int be){
    vs[be] = true;
    deque<int> dq;
    dq.push_back(be);
    while(dq.size()){
        int k = dq.front();
        dq.pop_front();
        for(auto i:tmp[k]){
            if(!vs[i]){
                vs[i] = true;
                dq.push_back(i);
            }
        }
    }
}
void check(int p){
    for(int i=0;i<ed.size();i++){
        if(i!=p){
            tmp[ed[i].first].push_back(ed[i].second);
            tmp[ed[i].second].push_back(ed[i].first);
        }
    }
    int c = 0;
    for(int i=1;i<=v;i++){
        if(!vs[i]){
            c++;
            bfs2(i);
        }
    }
    if(c>ans) a.push_back({ed[p].first,ed[p].second});
}
void findEdge(){
    for(int i=0;i<ed.size();i++){
        tmp.clear();
        tmp.resize(mxn);
        memset(vs,false,sizeof(vs));
        check(i);
    }
    for(int i=0;i<a.size();i++) cout<<a[i].first<<' '<<a[i].second<<' ';
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        connected();
        findEdge();
    }
}
/*
1

5 5
1 2
1 3
2 3
2 5
3 4

9 10
1 2
1 3
2 4
3 4
4 5
5 6
6 7
6 8
7 9
8 9


10 12
1 2
1 3
2 4
3 4
4 5
5 6
6 7
6 8
7 9
8 9
4 10
6 10

12 13
1 2
1 3
2 4
3 4
4 5
5 6
6 7
6 8
7 9
8 9
5 10
10 11
10 12

12 14
1 2
1 3
2 4
3 4
4 5
5 6
6 7
6 8
7 9
8 9
5 10
10 11
10 12
11 12

*/
