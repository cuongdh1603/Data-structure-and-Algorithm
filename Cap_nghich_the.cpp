#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll ans = 0;
vector<ll> a,tmp;
void init(){
    ans = 0;
    cin>>n;
    a.resize(n);
    tmp.resize(n);
    for(ll i=0;i<n;i++) cin>>a[i];
}
void merge(ll l,ll m,ll r){
    //int len1 = m-l+1,len2 = r-m;
    ll i = l,j = m+1,k = l;
    //int i=0,j=0,k=l;
    while(i<=m&&j<=r){
        if(a[i]>a[j]){
            ans += (m+1-i);
            tmp[k] = a[j];
            k++;
            j++;
        }
        else{
            tmp[k] = a[i];
            k++;
            i++;
        }
    }
    while(i<=m) tmp[k++] = a[i++];
    while(j<=r) tmp[k++] = a[j++];
    for(ll i=l;i<=r;i++) a[i] = tmp[i];
}
void solve(ll l,ll r){
    if(l<r){
        ll m = l + (r-l)/2;
        solve(l,m);
        solve(m+1,r);
        merge(l,m,r);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        solve(0,n-1);
        cout<<ans<<endl;
    }
}
/*
3
5
2 4 1 3 5

5
5 4 3 2 1

8
1 20 6 7 5 8 11 3
*/
