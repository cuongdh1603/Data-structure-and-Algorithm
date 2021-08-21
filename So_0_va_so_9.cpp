#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<ll> dq;
        dq.push_back(9);
        while(1){
            ll x = dq.front();
            if(x%n==0){
                cout<<x<<endl;
                break;
            }
            else{
                dq.pop_front();
                dq.push_back(x*10);
                dq.push_back(x*10+9);
            }
        }
    }
}
