#include<bits/stdc++.h>
#define mc 25003
#define mn 103
using namespace std;
int f[mn][mc];
int c,n;
vector<int> w;
void solve(){
    for(int i=0;i<=c;i++) f[0][i] = 0;
    for(int i=0;i<=n;i++) f[i][0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
            f[i][j] = f[i-1][j];
            if(j>=w[i]&&f[i-1][j-w[i]]+w[i]>f[i][j])
                f[i][j] = f[i-1][j-w[i]]+w[i];
        }
    }
}
int main(){

    cin>>c>>n;
    w.resize(n+1);
    for(int i=1;i<=n;i++) cin>>w[i];
    sort(w.begin(),w.end());
    solve();
    cout<<f[n][c];
}

