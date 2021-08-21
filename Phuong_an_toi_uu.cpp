#include<bits/stdc++.h>
#define mxn 103
using namespace std;
int n,m,f[mxn][mxn];
struct obj{
    int c,a;
};
vector<obj> dt;
int main(){
    memset(f,0,sizeof(f));
    cin>>n>>m;
    dt.resize(n+1);
    for(int i=1;i<=n;i++) cin>>dt[i].c;
    for(int i=1;i<=n;i++) cin>>dt[i].a;
    for(int i=0;i<=m;i++) f[0][i] = 0;
    for(int i=0;i<=n;i++) f[i][0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            f[i][j] = f[i-1][j];
            if(j>=dt[i].a&&f[i][j] <= f[i-1][j-dt[i].a]+dt[i].c)
                f[i][j] = f[i-1][j-dt[i].a]+dt[i].c;
        }
    }
    cout<<f[n][m]<<endl;
    vector<int> ans;
    while(n!=0){
        if(f[n][m]!=f[n-1][m]){
        ans.push_back(1);
        m -= dt[n].a;
        }
        else ans.push_back(0);
        n--;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
    cout<<endl;
}
/*
4  10
6 5 3 7
5 4 6 5
*/
