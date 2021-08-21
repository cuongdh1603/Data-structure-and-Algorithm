#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
vector<ll> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        set<ll> st;
        for(auto &i:a){
            cin>>i;
            st.insert(i);
        }
        if(st.size()<2) cout<<-1;
        else{
            int d = 0;
            for(auto i:st){
                cout<<i<<' ';
                d++;
                if(d==2) break;
            }
        }
        cout<<endl;
    }
}


