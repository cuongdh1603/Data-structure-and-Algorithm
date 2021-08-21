#include<bits/stdc++.h>
#define mxn 503
using namespace std;
int n,m,dt;
int a[mxn][mxn];
void init(){
    memset(a,0,sizeof(a));
    dt = 0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]) dt = 1;
        }
}
void solve(){
    for(int i=2;i<=n;i++)
        for(int j=2;j<=m;j++)
        {
            if(a[i-1][j]&&a[i-1][j-1]&&a[i][j-1]&&a[i][j])
            {
                 a[i][j]=min(a[i-1][j],min(a[i-1][j-1],a[i][j-1]))+1;
                 dt = max(dt,a[i][j]);
            }
        }
    cout<<dt<<endl;
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
6 5

0 1 1 0 1
1 1 0 1 0
0 1 1 1 0
1 1 1 1 0
1 1 1 1 1
0 0 0 0 0
6 5

0 1 1 0 1
1 1 0 1 0
0 1 1 1 0
1 1 1 1 0
1 1 1 0 1
0 0 0 0 0
6 5

0 1 1 0 1
1 1 0 1 0
0 0 1 1 0
1 1 0 1 0
1 1 1 1 1
0 0 0 0 0
6 5

0 1 1 0 1
1 1 0 1 0
0 0 1 1 0
1 1 0 1 0
0 1 1 1 1
0 0 0 0 0
2 2

0 0
0 0
*/
