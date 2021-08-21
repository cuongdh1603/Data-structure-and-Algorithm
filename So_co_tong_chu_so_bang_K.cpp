#include<bits/stdc++.h>
#define ll long long
#define mxc 5003
#define mxr 103
#define mod 1000000007
using namespace std;
ll f[mxr][mxc];
ll rec(int step,int sum) {
    if(sum < 0) return 0;
    if(step==0&&sum==0) return 1;
    if(step==0) return 0;
    if(f[step][sum]!=-1) return f[step][sum];
    ll ans = 0;
    for(int i=0;i<10;i++) {
        ans += rec(step-1, sum-i);
        ans %= mod;
    }
    return f[step][sum] = ans;
}

ll solve(int step,int sum) {
    ll ans = 0;
    memset(f,-1,sizeof(f));
    for(int i=1;i<10;i++) {
        ans += rec(step-1,sum-i);
        ans %= mod;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
}
