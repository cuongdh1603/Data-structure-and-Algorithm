#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.size(),ans = 0;
        stack<char> st;
        for(int i=0;i<len;i++){
            if(s[i]=='(') st.push(s[i]);
            else{
                if(st.size()&&st.top()=='(') st.pop();
                else st.push(s[i]);
            }
        }
        string res = "";
        while(st.size()){
            res += st.top();
            st.pop();
        }
        //cout<<res<<endl;
        reverse(res.begin(),res.end());
        //cout<<res<<endl;
        for(int i=0;i<res.size();i+=2){
            if(res[i]==res[i+1]) ans++;
            else ans += 2;
        }
        cout<<ans<<endl;
    }
}
