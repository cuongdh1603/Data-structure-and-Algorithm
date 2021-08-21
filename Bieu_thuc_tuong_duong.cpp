#include<bits/stdc++.h>
using namespace std;
string s;
bool isOperator(char c){
    return (c=='+'||c=='-');
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        stack<char> st,op;
        int len = s.size();
        for(int i=0;i<len;i++){
            if(s[i]!=')'){
                if(i<len-1&&isOperator(s[i])&&s[i+1]=='(') op.push(s[i]);
                st.push(s[i]);
            }
            else if(s[i]==')'){
                string res = "";
                while(st.size()&&st.top()!='('){
                        res += st.top();
                        st.pop();
                }
                st.pop();
                if(op.size()&&op.top()=='-'){
                    for(int i=0;i<res.size();i++){
                        if(res[i]=='-') res[i] = '+';
                        else if(res[i]=='+') res[i] = '-';
                    }
                }
                for(int i=res.size()-1;i>=0;i--) st.push(res[i]);
                if(op.size()) op.pop();
            }
        }
        string ans = "";
        while(st.size()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(s[i]=='('||s[i]==')'){
                s.erase(s.begin()+i);
                i--;
            }
        }
        cout<<ans<<endl;
    }
}
/*
((a+b)-c)
(a+b)-c
(a+b)-(c+(d-e)-f)
a-(b+(c-(d+e-(f+g)-h)+i)-k)+m
*/
