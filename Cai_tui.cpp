#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int n,m,f[mxn][mxn];
struct obj{
    int w,v;
};
vector<obj> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(f,0,sizeof(f));
        cin>>n>>m;
        a.resize(n+1);
        for(int i=1;i<=n;i++) cin>>a[i].w;
        for(int i=1;i<=n;i++) cin>>a[i].v;
        for(int i=0;i<=m;i++) f[0][i] = 0;
        for(int i=0;i<=n;i++) f[i][0] = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                f[i][j] = f[i-1][j];
                if(j>=a[i].w&&f[i][j] < f[i-1][j-a[i].w]+a[i].v)
                    f[i][j] = f[i-1][j-a[i].w]+a[i].v;
            }
        }
        cout<<f[n][m]<<endl;
    }
}

