#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,check;
vector<ll> num;
ll ope(ll a,ll b,char x){
    if(x=='+') return a+b;
    if(x=='-') return a-b;
    if(x=='*') return a*b;
    if(x=='/') return a/b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        num.clear();
        stack<char> stk;
        deque<ll> dq;
        char c;
        for(int i=0;i<n/2;i++){
            cin>>c;
            stk.push(c);
        }
        ll x;
        for(int i=n/2;i<n;i++){
            cin>>x;
            num.push_back(x);
        }
        for(int i=num.size()-1;i>=0;i--) dq.push_back(num[i]);
        while(dq.size()){
            ll a = dq.front();
            dq.pop_front();
            ll b = dq.front();
            dq.pop_front();
            c = stk.top();
            stk.pop();
            ll d = ope(b,a,c);
            if(dq.empty()){
                cout<<d<<endl;
                break;
            }
            dq.push_back(d);
        }
    }
}
/*
2
7
+ * - 5 4 100 20
3
- 4 7
*/
