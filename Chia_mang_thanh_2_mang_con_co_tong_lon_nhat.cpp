#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int sum1=0,sum2=0;
        if(k<=n/2){
            for(int i=0;i<k;i++) sum1 += a[i];
            for(int i=k;i<n;i++) sum2 += a[i];
            cout<<sum2 - sum1;
        }
        else{
            for(int i=0;i<n-k;i++) sum1 += a[i];
            for(int i=n-k;i<n;i++) sum2 += a[i];
            cout<<sum2 - sum1;
        }
        cout<<endl;
    }
}
