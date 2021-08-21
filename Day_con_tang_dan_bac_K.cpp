#include<bits/stdc++.h>
using namespace std;
int n,k,ans = 0;
vector<int> a;
void solve(int pos,int lev,int val){
    if(lev==k-1){
        ans++;
        return;
    }
    if(lev<k&&pos<n-1){
        for(int i=pos+1;i<n;i++)
            if(a[i]>val) solve(i,lev+1,a[i]);
            //else return;
    }
}
main(){
    cin>>n>>k;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<=n-k;i++) solve(i,0,a[i]);
    cout<<ans;
}
