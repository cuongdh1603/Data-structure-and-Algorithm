#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<int> st;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="PUSH"){
            int x;
            cin>>x;
            st.push(x);
        }
        else if(s=="PRINT"){
            if(st.empty()) cout<<"NONE";
            else cout<<st.top();
            cout<<endl;
        }
        else if(s=="POP"){
            if(st.size()) st.pop();
        }
    }
}


