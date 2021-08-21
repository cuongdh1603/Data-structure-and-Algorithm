#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll n;
vector<ll> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        ll sum = 0;
        for(int i=0;i<n;i++){
            sum += (a[i]*i)%mod;
        }
        cout<<sum%mod<<endl;
    }
}
