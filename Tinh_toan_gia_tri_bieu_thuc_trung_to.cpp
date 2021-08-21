#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<string> Infix,Postfix;
bool isSign(char c){
    return (c=='('||c==')'||c=='+'||c=='-'||c=='/'||c=='*');
}
int Importance(string s){
    if(s=="+"||s=="-") return 1;
    else if(s=="*"||s=="/") return 2;
    else return 0;
}
bool isOperator(string c){
    return (c=="+"||c=="-"||c=="*"||c=="/");
}
ll toNum(string s){
    ll ans = 0;
    for(int i=0;i<s.size();i++){
        ans *= 10;
        ans += (s[i]-'0');
    }
    return ans;
}
void init(){
    Infix.clear();
    Postfix.clear();
    string s;
    cin>>s;
    for(int i=0;i<s.size();){
        if(isSign(s[i])){
            string rs =  "";
            rs += s[i];
            Infix.push_back(rs);
            i++;
        }
        else{
            string rs = "";
            while(!isSign(s[i])&&i<s.size()){
                rs += s[i];
                i++;
            }
            Infix.push_back(rs);
        }
    }
}
void convert(){
    stack<string> st;
    int len = Infix.size();
        for(int i=0;i<len;i++){
            if(Infix[i]=="(") st.push(Infix[i]);
            else if(Infix[i]==")"){
                while(st.size()&&st.top()!="("){
                    Postfix.push_back(st.top());
                    st.pop();
                }
                st.pop();
            }
            else{
                if(isOperator(Infix[i])){
                    while(st.size()&&Importance(st.top())>=Importance(Infix[i])){
                        Postfix.push_back(st.top());
                        st.pop();
                    }
                    st.push(Infix[i]);
                }
                else Postfix.push_back(Infix[i]);
            }
        }
        while(st.size()){
            Postfix.push_back(st.top());
            st.pop();
        }
}
void calculate(){
    stack<ll> st;
    int len = Postfix.size();
    for(int i=0;i<len;i++){
        if(!isOperator(Postfix[i])) st.push(toNum(Postfix[i]));
        else{
            ll a = st.top();
            st.pop();
            ll b = st.top();
            st.pop();
            if(Postfix[i]=="+") b+=a;
            else if(Postfix[i]=="-") b-=a;
            else if(Postfix[i]=="*") b*=a;
            else if(Postfix[i]=="/") b/=a;
            st.push(b);
        }
    }
    cout<<st.top()<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        convert();
        calculate();
    }
}
/*
4
6*3+2-(6-4/2)
100+99*22
6*((4*3)+5)
1-2
*/
