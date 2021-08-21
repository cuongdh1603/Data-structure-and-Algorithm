#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> G,A;
void dfs(int u,vector<int> &tmp){
    tmp.push_back(u);
    if(G[u].size()==0){
        A.push_back(tmp);
        return;
    }
    for(auto i:G[u]){
            dfs(i,tmp);
            tmp.pop_back();
    }
}
bool cmp(vector<int> &x,vector<int> &y){
    return (x[x.size()-1]<y[y.size()-1]);
}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        A.clear();
        G.clear();
        G.resize(n+1);
        int x,y;
        for(int i=0;i<n-1;i++){
            cin>>x>>y;
            G[x].push_back(y);
        }
        vector<int> tmp;
        dfs(1,tmp);
        sort(A.begin(),A.end(),cmp);
        for(int i=0;i<A.size();i++){
            for(auto y:A[i]) cout<<y<<' ';
            cout<<endl;
        }
    }
}












