#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,a,b,ans = 0;
        cin>>n;
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        while(n--){
            cin>>x;
            pq.push(x);
        }
        while(pq.size()>1){
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            x = (a+b)%mod;
            ans += x;
            pq.push(x);
        }
        cout<<ans%mod<<endl;
    }
}
