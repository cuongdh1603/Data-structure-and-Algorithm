#include<bits/stdc++.h>
#define ll long long
#define mxn 1000007
using namespace std;
ll n,m;
vector<ll> a,b;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        a.resize(n);
        b.resize(m);
        ll m1=INT_MIN,m2=INT_MAX;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            m1 = max(m1,a[i]);
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
            m2 = min(m2,b[i]);
        }
        cout<<m1*m2<<endl;
    }
}
