#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum = 0;
        for(int i=1;i<=n;i++) sum += pow(2,i);
        cout<<sum<<endl;
        for(ll i=1;i<=n;i++){
            for(ll j=pow(2,i);j<=pow(2,i+1)-1;j++){
                ll x = j;
                string s = "";
                while(x>1){
                    if(x&1) s = '8' + s;
                    else s = '6' + s;
                    x /= 2;
                }
                cout<<s<<' ';
            }
        }
        cout<<endl;
    }
}
