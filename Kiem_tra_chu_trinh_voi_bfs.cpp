#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int v,e,check;
vector<vector<int>> G;
set<int> st;
//vector<int> top,a;
bool vs[mxn];
void init(){
    cin>>v>>e;
    G.clear();
    //top.clear();
    //a.clear();
    check = 0;
    //clearStack();
    st.clear();
    G.resize(mxn);
    memset(vs,false,sizeof(vs));
    int x,y;
    //set<int> st;
    while(e--){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
        /*
        if(st.find(x)==st.end()){
            top.push_back(x);
            st.insert(x);
        }
        if(st.find(y)==st.end()){
            top.push_back(y);
            st.insert(y);
        }
        */
    }
    //sort(top.begin(),top.end());
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
