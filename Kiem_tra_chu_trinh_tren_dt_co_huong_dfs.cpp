#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int v,e,check;
vector<vector<int>> G;
bool vs[mxn];
void moveTop(int top,set<int> &st,set<int> &fi){
    st.erase(top);
    fi.insert(top);
}
bool dfs(int top,set<int> &white,set<int> &gray,set<int> &black){
    moveTop(top,white,gray);
    for(auto i:G[top]){
        if(black.find(i)!=black.end()) continue;
        if(gray.find(i)!=gray.end()) return true;
        if(dfs(i,white,gray,black)) return true;
    }
    moveTop(top,gray,black);
    return false;
}
void solve(){
    cin>>v>>e;
    G.clear();
    set<int> white,gray,black;
    check = 0;
    G.resize(mxn);
    memset(vs,false,sizeof(vs));
    int x,y;
    while(e--){
        cin>>x>>y;
        G[x].push_back(y);
        white.insert(x);
        white.insert(y);
    }
    while(white.size()){
        set<int>::iterator it = white.begin();
        if(dfs(*it,white,gray,black)){
            check = 1;
            break;
        }
    }
    cout<<(check?"YES":"NO")<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
/*
1

6 9
1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6 4

3 3
1 2
1 3
2 3

4 5
1 2
1 3
2 3
2 4
4 1

4 5
1 2
1 3
2 3
2 4
1 4
*/
