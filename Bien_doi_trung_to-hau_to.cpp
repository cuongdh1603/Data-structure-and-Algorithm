#include<bits/stdc++.h>
using namespace std;
int Importance(char c){
    if(c=='+'||c=='-') return 1;
    else if(c=='*'||c=='/') return 2;
    else if(c=='^') return 3;
    else return 0;
}
bool isOperator(char c){
    return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^');
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,ans = "";
        cin>>s;
        stack<char> st;
        int len = s.size();
        for(int i=0;i<len;i++){
            if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')'){
                while(st.size()&&st.top()!='('){
                    ans += st.top();
                    st.pop();
                }
                if(st.top()=='(')
                st.pop();
            }
            else{
                if(isOperator(s[i])){
                    while(st.size()&&Importance(st.top())>=Importance(s[i])){
                        ans += st.top();
                        st.pop();
                    }
                    st.push(s[i]);
                }
                else ans += s[i];
            }
        }
        while(st.size()){
            ans += st.top();
            st.pop();
        }
        cout<<ans<<endl;
    }
}
/*
2

(A+(B+C))

((A*B)+C)
*/

/*
14
A+B*C
A*B+C-(D-E/F)
(A)*(C+D)
A*B/C
(A/(B-C+D))*(E-A)*C
A/B-C+D*E-A*C
A*B/C-E*F+D
A*(C+D)
(A+B*C-D)
A+B*C-D*F+G/H-I+K*M
((A+B)*(C-D))
(A*B+C/D)*(E-F)
((A-(B/C))*((A/K)-L))

(A+(B+(C+(D+(E+F)))))

(((((A+B)+C)+D)+E)+F)

(A+(B+C))
a+b*(c^d-e)^(f+g*h)-i

((A*B)+C)
*/
