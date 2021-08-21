#include<bits/stdc++.h>
#define ll long long
#define mxn 1000007
using namespace std;
ll n,m;
vector<ll> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        a.resize(n+m);
        for(auto &i:a) cin>>i;
        sort(a.begin(),a.end());
        for(auto i:a) cout<<i<<' ';
        cout<<endl;
    }
}

