#include<bits/stdc++.h>
using namespace std;
bool isOperator1(char c){
    return (c=='+'||c=='-'||c=='*'||c=='/');
}
bool isOperator2(string c){
    return (c=="+"||c=="-"||c=="*"||c=="/");
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<string> st;
        int len = s.size();
        for(int i=0;i<len;i++){
            string rs = "";
            rs += s[i];
            //st.push(rs+s[i]);
            //char c = s[i];
            if(isOperator2(rs)) st.push(rs);
            else{
                if(!isOperator2(st.top())){
                    string res = "(";
                    res += st.top();
                    st.pop();
                    res += st.top()+rs+")";
                    st.pop();
                    st.push(res);
                    while(st.size()>1){
                        string s1 = st.top();
                        st.pop();
                        string s2 = st.top();
                        st.pop();
                        if(!isOperator2(s1)&&!isOperator2(s2)){
                            res = "(";
                            res += s2 + st.top() + s1 + ")";
                            st.pop();
                            st.push(res);
                        }
                        else{
                            st.push(s2);
                            st.push(s1);
                            break;
                        }
                    }
                }
                else st.push(rs);
            }
        }
        cout<<st.top()<<endl;
    }
}
