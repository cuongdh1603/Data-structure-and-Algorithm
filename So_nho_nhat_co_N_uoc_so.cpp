#include<bits/stdc++.h>
#define ll long long
#define N 10000
using namespace std;
int n;
int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41};
ll solve(ll num_prime,ll x,ll cur_prime){
    if(num_prime==n) return x;
    ll ans = 1e18;
    for(int power = 1;;power++){
        x *= prime[cur_prime];
        if(num_prime*(power+1)>n||x>ans) break;
        ans = min(ans,solve(num_prime*(power+1),x,cur_prime+1));
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<solve(1,1,0)<<endl;
    }
}
