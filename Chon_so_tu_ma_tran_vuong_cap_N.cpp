#include<bits/stdc++.h>
#define mxn 13
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int c[mxn][mxn],ans[mxn][mxn];
    int a[mxn];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        cin>>c[i][j];
    for(int i=1;i<=n;i++) a[i] = i;
    int dem = 0,sum = 0,d = 0;
    for(int i=1;i<=n;i++) sum += c[i][a[i]];
    if(sum==k){
        for(int i=1;i<=n;i++) ans[dem][i] = a[i];
        dem++;
    }
    while(!d){
        d = 1;
        sum = 0;
        for(int i=n-1;i>0;i--){
            if(a[i]<a[i+1]){
                d = 0;
                for(int j=n;j>i;j--)
                if(a[i]<a[j]){
                    swap(a[i],a[j]);
                    break;
                }
                sort(a+i+1,a+n+1);
                break;
            }
        }
        if(!d){
            for(int i=1;i<=n;i++) sum += c[i][a[i]];
            if(sum==k){
                for(int i=1;i<=n;i++) ans[dem][i] = a[i];
                dem++;
            }
        }
    }
    cout<<dem<<endl;
    for(int i=0;i<dem;i++){
        for(int j=1;j<=n;j++)
            cout<<ans[i][j]<<' ';
        cout<<endl;
    }
}
/*
4 4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
*/
