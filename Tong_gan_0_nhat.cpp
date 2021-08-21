#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll dif = INT_MAX,ans;
        vector<ll> a;
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
            if(abs(a[i]+a[j])<dif){
                dif = abs(a[i]+a[j]);
                ans = a[i]+a[j];
            }
        }
        cout<<ans<<endl;
    }
}
