#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll> a,odd,even;
    a.resize(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i%2==0) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    reverse(even.begin(),even.end());
    for(int i=1,j=0,k=0;i<=n;i++){
        if(i%2==0) cout<<even[j++]<<' ';
        else cout<<odd[k++]<<' ';
    }
    cout<<endl;
}
