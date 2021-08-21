#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        stack<ll> stk,stk_pos;
        stk_pos.push(0);
        vector<ll> vt,vt1;
        ll n;
        cin>>n;
        vt.resize(n+1);
        vt1.resize(n+1);
        for(int i=1;i<=n;i++){
            cin>>vt[i];
            while (stk.size()&&vt[i]>=stk.top())
            {
                stk.pop();
                stk_pos.pop();
            }
            stk.push(vt[i]);        
            vt1[i] = i - stk_pos.top();
            stk_pos.push(i);
        }
        for(int i=1;i<=n;i++) cout<<vt1[i]<<' ';
        cout<<endl;
    }
}