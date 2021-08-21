#include<bits/stdc++.h>
using namespace std;
int m,n,a[103][103],d;
void solve(int x,int y){
    if(x==m&&y==n){
        d++;
        return;
    }
    if(x<m) solve(x+1,y);
    if(y<n) solve(x,y+1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        d = 0;
        memset(a,0,sizeof(a));
        cin>>m>>n;
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
            cin>>a[i][j];
        solve(1,1);
        cout<<d<<endl;
    }
}
