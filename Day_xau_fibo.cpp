#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fibo[95] = {0};
void init(){
    fibo[1] = fibo[2] = 1;
    for(int i=3;i<93;i++) fibo[i] = fibo[i-2]+fibo[i-1];
}
char solve(int n,ll k){
    if(n==1) return 'A';
    else if(n==2) return 'B';
    ll m = fibo[n-2];
    if(k<=m) return solve(n-2,k);
    else return solve(n-1,k-m);
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
