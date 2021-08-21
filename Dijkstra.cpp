#include<bits/stdc++.h>
#define mxn 1003
#define ll long long
using namespace std;
int V,E,S;
typedef pair<int,int> ii;
vector<vector<ii>> G;
ll cost[mxn];
void init(){
    cin>>V>>E>>S;
    G.clear();
    G.resize(mxn);
    int x,y,w;
    while(E--){
        cin>>x>>y>>w;
        G[x].push_back({w,y});
        G[y].push_back({w,x});
    }
}
void dijkstra(){
    priority_queue<ii,vector<ii>,greater<ii>> pq;
    for(int i=1;i<=V;i++) cost[i] = INT_MAX;
    cost[S] = 0;
    pq.push({0,S});
    while(pq.size()){
        int v = pq.top().second;
        int c = pq.top().first;
        pq.pop();
        if(c==cost[v]){
            for(int i=0;i<G[v].size();i++){
                int vn = G[v][i].second;
                int vc = G[v][i].first;
                //cout<<vn<<' '<<vc<<endl;
                if(cost[vn]>vc+c){
                    cost[vn] = vc + c;
                    pq.push({cost[vn],vn});
                }
            }
        }
    }
}
void result(){
    for(int i=1;i<=V;i++) cout<<cost[i]<<' ';
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        dijkstra();
        result();
    }
}
/*
1

9  12 1
1  2   4
1  8   8
2  3   8
2  8   11
3  4   7
3  6   4
3  9   2
4  5   9
4  6  14
5  6  10
6  7  2
6  9  6

6 8 1
1 3 4
1 2 2
2 3 1
2 4 7
3 5 3
5 4 2
4 6 1
5 6 5

*/
