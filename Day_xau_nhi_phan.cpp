#include<bits/stdc++.h>
#define ll long long
#define mxn 95
using namespace std;
ll f[mxn] = {0};
void init(){
    f[1] = f[2] = 1;
    for(int i=3;i<mxn;i++) f[i] = f[i-1]+f[i-2];
}
int solve(int n,ll k){
    if(n==1) return 0;
    else if(n==2) return 1;
    else{
        if(k>f[n-2]) return solve(n-1,k-f[n-2]);
        else return solve(n-2,k);
    }
}
int main(){
    init();
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
}
