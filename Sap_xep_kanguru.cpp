#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        int dem = 0;
        cin>>n;
        a.resize(n);
        for(auto &i:a) cin>>i;
        sort(a.begin(),a.end());
        //int i=n-1,j=(n-1)/2;
        for(int i=n-1,j=(n-1)/2;i>(n-1)/2&&j>=0;){
            if(a[i]>=2*a[j]){
                dem++;
                i--;
                j--;
            }
            else j--;
        }
        cout<<dem + n - dem*2<<endl;
    }
}
