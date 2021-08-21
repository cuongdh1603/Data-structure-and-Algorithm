#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
vector<ll> l,r,h;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        ll ans = 0;
        h.resize(n+1);
        l.resize(n+1);
        r.resize(n+1);
        stack<ll> st;
        for(int i=1;i<=n;i++) cin>>h[i];
        for(int i=1;i<=n;i++){
            while(st.size()&&h[st.top()]>=h[i])
                st.pop();
            l[i] = (st.empty()?0:st.top());
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n;i>0;i--){
            while(st.size()&&h[st.top()]>=h[i])
                st.pop();
            if(i==1)
            r[i] = (st.empty()?n:st.top());
            else r[i] = (st.empty()?n+1:st.top());
            st.push(i);
        }
        for(int i=1;i<=n;i++) ans = max(ans,(r[i]-l[i]-1)*h[i]);
        cout<<ans<<endl;
    }
}
