#include<bits/stdc++.h>
using namespace std;
string s1,s2;
bool isOperator(char c){
    return (c=='+'||c=='-');
}
string convert(string s){
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
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        string ts1,ts2;
        ts1 = convert(s1);
        ts2 = convert(s2);
        //cout<<ts1<<' '<<ts2<<endl;
        if(ts1==ts2) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
/*
2
-(a+b+c)
-a-b-c
a-b-(c-d)
a-b-c-d
*/
