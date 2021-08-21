#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dem;
ll mid(ll x){
    int ans;
    for(int i=1;;i++){
        if(pow(2,i)>x){
            ans = i;
            break;
        }
    }
    return pow(2,ans)/2;
}
void solve(ll l,ll r,ll val,ll m){
    if(l>r) return;
    if(val==1){
        dem++;
        return;
    }
    else if(val==0) return;
    else{
        if(l<=m&&m<=r){
            if(val&1) dem++;
            solve(l,m-1,val/2,m-mid(val/2));
            solve(m+1,r,val/2,m+mid(val/2));
        }
        else if(l<m&&r<m) solve(l,r,val/2,m-mid(val/2));
        else if(l>m&&r>m) solve(l,r,val/2,m+mid(val/2));
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        dem = 0;
        solve(l,r,n,mid(n));
        cout<<dem<<endl;
    }
}
/*
64

7 2 5

10 3 10
10 3 5
10 3 6
10 3 7
10 3 8
10 3 9
10 3 10
10 3 11
10 3 12
10 3 13
10 3 14
10 3 15
10 4 10
10 4 5
10 4 6
10 4 7
10 4 8
10 4 9
10 5 6
10 5 7
10 5 8
10 5 9
10 5 10
10 5 11
10 5 12
10 5 13
10 5 14
10 5 15
10 6 7
10 6 8
10 6 9
10 6 10
10 6 11
10 6 12
10 6 13
10 6 14
10 6 15
10 7 8
10 7 9
10 7 10
10 7 11
10 7 12
10 7 13
10 7 14
10 7 15
10 8 9
10 8 10
10 8 11
10 8 12
10 8 13
10 8 14
10 8 15
10 9 10
10 9 11
10 9 12
10 9 13
10 9 14
10 9 15
10 10 11
10 10 12
10 10 13
10 10 14
10 10 15
*/
