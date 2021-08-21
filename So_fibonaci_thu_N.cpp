#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
map<ll,ll> mp;
ll solve(ll n){
    if(mp.count(n)) return mp[n];
    ll m = n/2;
    if(n%2==1)
        return mp[n] = ((solve(m)*solve(m-1))%mod+(solve(m)*solve(m+1))%mod)%mod;
    else
        return mp[n] = ((solve(m)*solve(m))%mod+(solve(m-1)*solve(m-1))%mod)%mod;
}
int main(){
    mp[0] = mp[1] = 1;
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        //solve(n);
        cout<<(!n?0:solve(n-1))<<endl;
    }
}
