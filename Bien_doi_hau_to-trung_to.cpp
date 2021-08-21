#include<bits/stdc++.h>
using namespace std;
bool isOperator(string s){
    return  (s=="+"||s=="-"||s=="*"||s=="/");
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.size();
        stack<string> st;
        for(int i=0;i<len;i++){
            string rs = "";
            rs += s[i];
            if(!isOperator(rs)) st.push(rs);
            else{
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                rs = '('+s2+rs+s1+')';
                st.push(rs);
            }
        }
        cout<<st.top()<<endl;
    }
}
/*
2
ab+ef*g*-
wlrb+-*
*/
