#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n;
        set<int> st;
        while(n--){
            cin>>x;
            while(x){
                st.insert(x%10);
                x/=10;
            }
        }
        for(auto it:st) cout<<it<<' ';
        cout<<endl;
    }
}


