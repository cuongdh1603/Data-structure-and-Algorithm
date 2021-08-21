#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
vector<ll> a,b;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        ll sum = 0;
        a.resize(n);
        b.resize(n);
        for(auto &i:a) cin>>i;
        for(auto &i:b) cin>>i;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        for(int i=0;i<n;i++) sum += a[i]*b[i];
        cout<<sum<<endl;
    }
}
