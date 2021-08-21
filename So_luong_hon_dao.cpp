#include<bits/stdc++.h>
#define mxn 503
using namespace std;
int n,m,g[mxn][mxn];
void init(){
    memset(g,0,sizeof(g));
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        cin>>g[i][j];
}
void Try(int x,int y){
    g[x][y] = 0;
    if(g[x-1][y-1]) Try(x-1,y-1);
    if(g[x-1][y]) Try(x-1,y);
    if(g[x-1][y+1]) Try(x-1,y+1);
    if(g[x][y+1]) Try(x,y+1);
    if(g[x+1][y+1]) Try(x+1,y+1);
    if(g[x+1][y]) Try(x+1,y);
    if(g[x+1][y-1]) Try(x+1,y-1);
    if(g[x][y-1]) Try(x,y-1);
}
void solve(){
    int dem = 0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if(g[i][j]){
                dem++;
                Try(i,j);
            }
        }
    cout<<dem<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        solve();
    }
}
