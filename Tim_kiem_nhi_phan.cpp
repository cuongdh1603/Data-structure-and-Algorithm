#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll k;
vector<ll> a;
int binarySearch(int l,int r){
    while(l<r){
        int m =(l+r)/2;
        if(a[m]>=k){
            r = m;
        }
        else l = m+1;
    }
    if(a[l]==k) return l+1;
    else return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        a.resize(n);
        for(auto &i:a) cin>>i;
        int ans = binarySearch(0,n-1);
        if(ans) cout<<ans;
        else cout<<"NO";
        cout<<endl;
    }
}
