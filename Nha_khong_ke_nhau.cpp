#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
vector<ll> a;
void solve(){
    for(int i=3;i<=n;i++)
        a[i] += max(a[i-2],a[i-3]);
    cout<<max(a[n-1],a[n])<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n+1,0);
        for(int i=1;i<=n;i++) cin>>a[i];
        solve();
    }
}
