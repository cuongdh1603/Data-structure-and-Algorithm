#include<bits/stdc++.h>
#define ll long long
#define mod 123456789
using namespace std;
ll solve(ll n){
    ll ans = 1;
    ll k = 2;
    while(n>0){
        if(n%2==1)
            ans = (ans*k)%mod;
            n/=2;
            k = (k*k)%mod;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<solve(n-1)<<endl;
    }
}
