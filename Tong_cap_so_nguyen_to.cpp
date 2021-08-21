#include<bits/stdc++.h>
#define ll long long
#define mxn 1000007
using namespace std;
int a[mxn];
void init(){
    a[0] = a[1] = 1;
    for(ll i=2;i*i<=mxn;i++){
        if(!a[i])
            for(ll j=i*i;j<=mxn;j+=i)
            a[j] = 1;
    }
}
void solve(ll n){
    int d = 0;
    for(int i=2;i<=n/2;i++){
        if(!a[i]&&!a[n-i]){
            cout<<i<<' '<<n-i<<endl;
            d = 1;
            break;
        }
    }
    if(!d) cout<<-1<<endl;
}
int main(){
    init();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        solve(n);
    }
}



