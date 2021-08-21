#include<bits/stdc++.h>
#define mxn 503
using namespace std;
int r,c,a[mxn][mxn],check[mxn][mxn],day;
bool isOk(){
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++)
            if(a[i][j]==1&&!a[i-1][j]&&!a[i+1][j]&&!a[i][j-1]&&!a[i][j+1])
            return false;
    }
    return true;
}
bool isFull(){
     for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++)
            if(a[i][j]==1)
            return false;
    }
    return true;
}
void solve(){
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        if(a[i][j]==1&&((a[i-1][j]==2&&check[i-1][j]!=day)||(a[i+1][j]==2&&check[i+1][j]!=day)||(a[i][j-1]==2&&check[i][j-1]!=day)||(a[i][j+1]==2&&check[i][j+1]!=day)))
           {
               a[i][j]++;
               check[i][j] = day;
           }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        cin>>r>>c;
        for(int i=1;i<=r;i++)
            for(int j=1;j<=c;j++)
            cin>>a[i][j];
        if(isOk()){
            day = 0;
            while(!isFull()){
                day++;
                solve();
                }
            cout<<day<<endl;
            }
            else cout<<-1<<endl;
        }
}
