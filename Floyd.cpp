#include<bits/stdc++.h>
#define ll long long
#define mxn 103
using namespace std;
ll n,m,q;
ll f[mxn][mxn];
void init(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        f[i][j] = INT_MAX;
    for(ll i=1;i<=n;i++) f[i][i] = 0;
    int x,y,z;
    while(m--){
        cin>>x>>y>>z;
        f[x][y]=z;
        f[y][x]=z;
    }
}
void floyd(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            //if(i!=k){
                for(int j=1;j<=n;j++){
                    //if(j!=k){
                        f[i][j] = min(f[i][j],f[i][k]+f[k][j]);
                    //}
                }
            //}
        }
    }
}
void query(){
    cin>>q;
    int x,y;
    while(q--){
        cin>>x>>y;
        cout<<f[x][y]<<endl;
    }
}
int main(){
    init();
    floyd();
    query();
}
/*
5 6

1 2 6

1 3 7

2 4 8

3 4 9

3 5 1

4 5 2

3

1 5

2 5

4 3
*/
