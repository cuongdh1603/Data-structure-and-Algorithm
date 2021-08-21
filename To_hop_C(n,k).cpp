#include<bits/stdc++.h>
#define ll long long
#define mxn 1003
#define mod 1000000007
using namespace std;
ll C[mxn][mxn];
void init(){
    for(int i=1;i<mxn;i++) C[0][i] = 1;
    for(int i=1;i<mxn;i++) C[1][i] = i;
    for(int i=1;i<mxn;i++) C[i][i] = 1;
    for(int i=1;i<mxn;i++){
        for(int j=i+1;j<mxn;j++)
            C[i][j] = (C[i][j-1]+C[i-1][j-1])%mod;
    }
}
int main(){
    init();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<C[k][n]<<endl;
    }
}
