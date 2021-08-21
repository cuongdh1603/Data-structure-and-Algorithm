#include<bits/stdc++.h>
#define mxn 103
using namespace std;
int lx,ly,lz;
int f[mxn][mxn][mxn];
string x,y,z;
void solve(){
    for(int i=1;i<=lx;i++){
        for(int j=1;j<=ly;j++){
            for(int k=1;k<=lz;k++){
                if(z[k-1]==y[j-1]&&z[k-1]==x[i-1])
                    f[i][j][k] = f[i-1][j-1][k-1] + 1;
                else f[i][j][k] = max(f[i-1][j][k],max(f[i][j-1][k],f[i][j][k-1]));
            }
        }
    }
    cout<<f[lx][ly][lz]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(f,0,sizeof(f));
        cin>>lx>>ly>>lz>>x>>y>>z;
        solve();
    }
}
