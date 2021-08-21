#include<bits/stdc++.h>
#define mxn 103
using namespace std;
char G[mxn][mxn];
int n,m;
int dx[] = {-1,-1,-1,0,1,1,1,0};
int dy[] = {-1,0,1,1,1,0,-1,-1};
void Try(int x,int y){
    G[x][y] = '.';
    for(int i=0;i<8;i++){
        int x1 = x + dx[i],y1 = y + dy[i];
        if(x1>0&&x1<=n&&y1>0&&y1<=m&&G[x1][y1]=='W') Try(x1,y1);
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
        cin>>G[i][j];
    int ans = 0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        if(G[i][j]=='W'){
            ans++;
            Try(i,j);
        }
    }
    cout<<ans;
}
/*
10 12

W........WW.

.WWW.....WWW

....WW...WW.

.........WW.

.........W..

..W......W..

.W.W.....WW.

W.W.W.....W.

.W.W......W.

..W.......W.
*/
