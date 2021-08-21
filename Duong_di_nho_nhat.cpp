#include<bits/stdc++.h>
#define ll long long
#define mxn 1003
using namespace std;
int n,m;
ll a[mxn][mxn];
void init(){
    memset(a,0,sizeof(a));
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];
}
int solve(){
    for(int i=1;i<m;i++) a[0][i] += a[0][i-1];
    for(int i=1;i<n;i++) a[i][0] += a[i-1][0];
    for(int i=1;i<n;i++)
        for(int j=1;j<m;j++)
        a[i][j] += min(a[i-1][j-1],min(a[i][j-1],a[i-1][j]));
    return a[n-1][m-1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        cout<<solve()<<endl;
    }
}
