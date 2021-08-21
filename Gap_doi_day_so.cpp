#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll k,ll s,int n){
    ll m = s/2;
    if(k==m+1) return n;
    else if(k<=m) return solve(k,m,n-1);
    else return solve(k-m-1,m,n-1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        ll s = pow(2,n)-1;
        cout<<solve(k,s,n)<<endl;
    }
}

