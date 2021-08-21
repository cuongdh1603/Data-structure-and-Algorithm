#include<bits/stdc++.h>
using namespace std;
string s;
stack<char> st;
void solve(){
    int i;
    bool thua = false;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] != ')'){
            st.push(s[i]);
        }
        else{
            st.pop();
            thua = true;
            while(st.top()!='('){
                if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/')
                    thua = false;
                st.pop();
                }
        }
        if(thua==true){
            cout<<"Yes\n";
            break;
        }
    }
    if(thua == false)
        cout<<"No\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
