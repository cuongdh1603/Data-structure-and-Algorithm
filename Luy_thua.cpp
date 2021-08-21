#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll solve(int x,ll y){
    if(y==1) return x%mod;
    else if(y==2) return (x*x)%mod;
    if(y%2==0) return (solve(x,y/2)%mod*solve(x,y/2)%mod)%mod;
    else return (solve(x,y/2)%mod*solve(x,y/2+1)%mod)%mod;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
}
