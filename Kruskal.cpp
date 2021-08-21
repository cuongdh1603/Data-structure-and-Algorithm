#include<bits/stdc++.h>
#define ii pair<int,int>
#define iii pair<int,ii>
#define mxn 103
using namespace std;
int v,e,wt,par[mxn];
int parent(int p){
    if(par[p] != p) return par[p] = parent(par[p]);
    else return p;
}
void joint(int x,int y){
    par[parent(y)] = parent(x);
}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>v>>e;
        wt = 0;
        vector<iii> vertices;
        int t,s,w;
        for(int i=0;i<e;i++){
            cin>>t>>s>>w;
            vertices.push_back({w,{s,t}});
        }
        sort(vertices.begin(),vertices.end());
        for(int i=0;i<=v;i++) par[i] = i;
        for(int i=0;i<e;i++){
            int x = vertices[i].second.first,y = vertices[i].second.second;
            if(parent(x)!=parent(y)){
                joint(x,y);
                wt += vertices[i].first;
            }
        }
        cout<<wt<<endl;
    }
}
/*
2
3 3
1 2 5

2 3 3

1 3 1
2 1
1 2 5
*/
