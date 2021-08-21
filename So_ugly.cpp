#include<bits/stdc++.h>
#define ll long long
#define mxn 10003
using namespace std;
vector<ll> ugly(mxn);
void init(){
    ugly[0] = 1;
    int i2 = 0,i3 = 0,i5 = 0;
    ll k1 = ugly[i2]*2,k2 = ugly[i3]*3,k3 = ugly[i5]*5;
    for(int j=1;j<mxn;j++){
        ugly[j] = min(k1,min(k2,k3));
        //cout<<ugly[j]<<endl;
        if(ugly[j]==k1){
            i2++;
            k1 = ugly[i2]*2;
        }
        if(ugly[j]==k2){
            i3++;
            k2 = ugly[i3]*3;
        }
        if(ugly[j]==k3){
            i5++;
            k3 = ugly[i5]*5;
        }
    }
}
int main(){
    init();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ugly[n-1]<<endl;
    }
}
