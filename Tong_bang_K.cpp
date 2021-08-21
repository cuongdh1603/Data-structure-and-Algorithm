#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int n,k;
vector<int> a;
vector<ll> f;
void init(){
    cin>>n>>k;
    a.resize(n);
    f.resize(k+1);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<=k;i++) f[i] = 0;
}
void solve(){
    f[0] = 1;
    for(int i=1;i<=k;i++)
    for(int j=0;j<n;j++){
        if(i>=a[j]){
            f[i] += f[i-a[j]]%mod;
            f[i] %= mod;
        }
    }
    cout<<f[k]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        solve();
    }
}
/*
2
3 7
1 5 6
4 14
12 3 1 9
*/
