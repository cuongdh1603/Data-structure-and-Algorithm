#include<bits/stdc++.h>
using namespace std;
bool isOperator(string c){
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
            if(isOperator(rs)) st.push(rs);
            else{
                if(!isOperator(st.top())){
                    string s1 = st.top()+rs;
                    st.pop();
                    s1 += st.top();
                    st.pop();
                    st.push(s1);
                    while(st.size()>1){
                        string s1 = st.top();
                        st.pop();
                        string s2 = st.top();
                        st.pop();
                        if(!isOperator(s1)&&!isOperator(s2)){
                            rs = s2 + s1 + st.top();
                            st.pop();
                            st.push(rs);
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
//+*-abcd
