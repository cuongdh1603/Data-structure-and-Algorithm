#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll solve(int n,int k){
    vector<ll> ans;
    ll sum = 0;
    ans.push_back(1);
    for(int i=1;i<=k;i++){
        sum = (sum + ans.back())%mod;
        ans.push_back(sum);
    }
    if(n<=k) return ans[n];
    for(int i=k+1;i<=n;i++)
        ans.push_back((2*ans.back()%mod-ans[i-k-1]%mod+mod)%mod);
    return ans.back();
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
