#include<bits/stdc++.h>
#define mxn 1003
#define ll long long
#define mod 1000000007
using namespace std;
int f[mxn][mxn];
int main(){

    ll n;
    vector<ll> a;
    ll ans = 0;
    cin>>n;
    a.resize(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0) ans += a[i]*2;
    }
    cout<<ans;

}
