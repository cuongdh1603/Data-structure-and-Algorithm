#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=n-1;i>n-k-1;i--) cout<<a[i]<<' ';
        cout<<endl;
    }
}
