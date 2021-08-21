#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int v,e,check;
vector<vector<int>> G;
void init(){
    cin>>v>>e;
    G.clear();
    G.resize(mxn);
    int x,y;
    while(e--){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
}
void solve(){
    int c = 0;
    for(int i=1;i<=v;i++){
        int s = G[i].size();
        if(s&1) c++;
    }
    if(!c) cout<<2;
    else if(c<3) cout<<1;
    else cout<<0;
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        solve();
    }
}
/*
2

6  10

1 2 1 3 2 3 2 4 2 5 3 4 3 5 4 5 4 6 5 6

6 9

1  2 1  3 2  3 2  4 2  5 3  4 3  5 4  5 4  6
*/
