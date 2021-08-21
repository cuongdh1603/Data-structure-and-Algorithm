#include<bits/stdc++.h>
using namespace std;
int n,x,y,z;
vector<int> f;
void solve(){
    f.resize(n+1);
    for(int i=0;i<=n;i++) f[i] = 0;
    f[1] = x;
    for(int i=2;i<=n;i++){
        if(i&1) f[i] = min(f[i/2+1]+y+z,f[i-1]+x);
        else f[i] = min(f[i/2]+z,f[i-1]+x);
    }
    cout<<f[n]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x>>y>>z;
        solve();
    }
}
/*
2
9
1 2 1
10
2 5 4
*/
