#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int n;
int finding(int tmp[],int val,int n){
    for(int i=0;i<n;i++){
        if(tmp[i]==val) return i;
    }
    return -1;
}
void solve(int in[],int pre[],int n){
    int root = finding(in,pre[0],n);
    if(root){
        solve(in,pre+1,root);
    }
    if(root!=n-1){
        solve(in+root+1,pre+root+1,n-root-1);
    }
    cout<<pre[0]<<' ';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int in[mxn],pre[mxn];
        for(int i=0;i<n;i++) cin>>in[i];
        for(int i=0;i<n;i++) cin>>pre[i];
        solve(in,pre,n);
        cout<<endl;
    }
}
/*
1

6
4  2  5  1  3  6

1  2  4  5  3  6
*/
