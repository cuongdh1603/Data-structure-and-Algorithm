#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,x;
vector<ll> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        a.resize(n);
        int d = 0,p;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(!d&&a[i]<=x){
                d = 1;
                p = i;
            }
            else if(a[i]<=x&&d&&a[i]>a[p]) p = i;
        }
        cout<<(d?p+1:-1)<<endl;
    }
}
