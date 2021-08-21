#include<bits/stdc++.h>
#define mxn 1000000
#define ll long long

using namespace std;
struct data{
    ll val;
    int t;
};
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll s,t;
        cin>>s>>t;
        deque<data> dq;
        set<ll> visit;
        data a = {s,0};
        dq.push_back(a);
        visit.insert(s);
        while(dq.size()){
            a = dq.front();
            dq.pop_front();
            if(a.val==t){
                cout<<a.t;
                break;
            }
            if(a.val*2==t||a.val-1==t){
                cout<<a.t+1;
                break;
            }
            if(visit.find(a.val*2)==visit.end()&&a.t>=a.val-t){
                dq.push_back({a.val*2,a.t+1});
                visit.insert(a.val*2);
            }
            if(visit.find(a.val-1)==visit.end()){
                dq.push_back({a.val-1,a.t+1});
                visit.insert(a.val-1);
            }
        }
        cout<<endl;
    }
}
