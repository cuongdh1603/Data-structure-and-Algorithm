#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
vector<ll> a,b;
int main(){
    short t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        b.resize(n-1);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++) cin>>b[i];
        for(int i=0;i<n-1;i++){
            if(a[i]!=b[i]){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
