#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,x;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        ll v,ans;
        for(ll i=1;i<=n;i++){
            cin>>v;
            if(v==x) ans = i;
        }
        cout<<ans<<endl;
    }
}

