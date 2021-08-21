#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    short t;
    cin>>t;
    while(t--){
        ll n;
        vector<ll> a,tmp;
        cin>>n;
        a.resize(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        tmp = a;
        sort(tmp.begin(),tmp.end());
        ll l,r;
        for(ll i=0;i<n;i++)
        if(a[i]!=tmp[i]){
            l = i+1;
            break;
        }
        for(ll i=n-1;i>=0;i--)
        if(a[i]!=tmp[i]){
            r = i+1;
            break;
        }
        cout<<l<<' '<<r<<endl;
    }
}

