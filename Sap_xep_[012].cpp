#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        int x;
        cin>>n;
        int dem0=0,dem1=0,dem2=0;
        while(n--){
            cin>>x;
            if(!x) dem0++;
            else if(x==1) dem1++;
            else dem2++;
        }
        while(dem0--) cout<<0<<' ';
        while(dem1--) cout<<1<<' ';
        while(dem2--) cout<<2<<' ';
        cout<<endl;
    }
}
