#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll solve(ll n,ll k){
    if(k==1) return n%mod;
    ll tmp = solve(n,k/2);
    if(k&1) return (tmp*tmp%mod)*n%mod;
    else return (tmp*tmp%mod);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k = 0,tmp;
        cin>>n;
        tmp = n;
        while(tmp){
            k *= 10;
            k += tmp%10;
            tmp /= 10;
        }
        cout<<solve(n,k)<<endl;
    }
}
/*
2
2
12
*/
