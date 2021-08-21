#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        int dem = 0;
        cin>>n;
        deque<ll> dq;
        dq.push_back(1);
        while(1){
            ll x = dq.front();
            if(x<=n){
                dem++;
                dq.pop_front();
                dq.push_back(x*10);
                dq.push_back(x*10+1);
            }
            else break;
        }
        cout<<dem<<endl;
    }
}
