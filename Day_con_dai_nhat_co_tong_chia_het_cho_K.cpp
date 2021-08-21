#include<bits/stdc++.h>
#define mxc 53
#define mxr 1003
using namespace std;
int n,k,sum,ans;
int f[mxr][mxc];
vector<int> a;
void opt(){
    //memset(f,-1003,sizeof(f));
    for(int i=1;i<mxc;i++) f[0][i] = -1003;
    f[0][0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<k;j++){
            f[i][j] = max(f[i-1][j],f[i-1][(j+k-a[i]%k)%k]+1);
        }
    }
    cout<<f[n][0]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        a.resize(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        opt();
    }
}
/*
10 3
2 3 5 7 9 6 12 7 11 15
*/
