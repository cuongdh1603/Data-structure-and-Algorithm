#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int v,e,check;
vector<vector<int>> G;
set<int> st;
bool vs[mxn];
void init(){
    cin>>v>>e;
    G.clear();
    check = 0;
    st.clear();
    G.resize(mxn);
    memset(vs,false,sizeof(vs));
    int x,y;
    while(e--){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
}
void dfs(int pr,int ne){
    vs[ne] = true;
    for(auto i:G[ne]){
        if(!vs[i]){
            st.insert(i);
            dfs(ne,i);
        }
        else if(st.find(i)!=st.end()&&i!=pr){
            check = 1;
            return;
        }
    }
}
void solve(){
    for(int i=1;i<=v;i++){
        st.clear();
        st.insert(0);
        if(!vs[i]){
            st.insert(i);
            dfs(0,i);
        }
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
