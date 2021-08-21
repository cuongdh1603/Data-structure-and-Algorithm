#include<bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> ii;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        deque<ii> dq;
        dq.push_back({n,0});
        set<ll> st;
        st.insert(n);
        while(dq.size()){
            ii u = dq.front();
            ll k = u.first;
            dq.pop_front();
            if(k==1){
                cout<<u.second<<endl;
                break;
            }
            else if(k==2){
                cout<<u.second+1<<endl;
                break;
            }
            else{
                for(ll i=sqrt(k);i>1;i--){
                    if(k%i==0&&st.find(k/i)==st.end()){
                        dq.push_back({k/i,u.second+1});
                        st.insert(k/i);
                    }
                }
                if(st.find(k-1)==st.end()){
                    dq.push_back({k-1,u.second+1});
                    st.insert(k-1);
                }
            }
        }
    }
}
/*
3

17

50

100
*/
