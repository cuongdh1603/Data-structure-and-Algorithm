#include<bits/stdc++.h>
#define ll long long
#define mxn 1000007
using namespace std;
ll n;
vector<ll> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        ll mx = INT_MIN,mn = INT_MAX;
        set<int> st;
        for(auto &i:a){
            cin>>i;
            mx = max(i,mx);
            mn = min(i,mn);
            st.insert(i);
        }
        cout<<mx-mn-st.size()+1<<endl;
    }
}


