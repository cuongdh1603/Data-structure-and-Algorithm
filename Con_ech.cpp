#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=2) cout<<n;
        else if(n==3) cout<<4;
        else{
            ll sum = 0;
            vector<ll> ans;
            ans.push_back(1);
            for(int i=1;i<=3;i++){
                sum += ans.back();
                ans.push_back(sum);
            }
            for(int i=4;i<=n;i++){
                ans.push_back(2*ans.back()-ans[i-4]);
            }
            cout<<ans.back();
        }
        cout<<endl;
    }
}
