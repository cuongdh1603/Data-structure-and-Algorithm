#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isOperator(char c){
    return (c=='+'||c=='-'||c=='*'||c=='/');
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<float> num;
        //stack<char> ope;
        int len = s.size();
        for(int i=0;i<len;i++){
            char c = s[i];
            if(isOperator(c)){
                float x = num.top();
                num.pop();
                float y = num.top();
                num.pop();
                if(c=='+') y += x;
                else if(c=='-') y-=x;
                else if(c=='*') y*=x;
                else if(c=='/') y/=x;
                num.push(y);
            }
            else num.push(c-'0');
        }
        cout<<(int)num.top()<<endl;
    }
}
 /*
            string rs = "";
            rs += s[i];
            if(!isOperator(rs)) st.push(rs);
            else{
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                if(rs=="+") st.push(toStr(toNum(s2)+toNum(s1)));
                else if(rs=="-") st.push(toStr(toNum(s2)-toNum(s1)));
                else if(rs=="*") st.push(toStr(toNum(s2)*toNum(s1)));
                else if(rs=="/") st.push(toStr(toNum(s2)/toNum(s1)));
            }
*/
/*
ll toNum(string s){
    ll ans = 0;
    int neg = 0;
    if(s[0]=='-') neg = 1;
    for(int i=(neg?1:0);i<s.size();i++){
        ans *= 10;
        ans += s[i] - '0';
    }
    if(neg) ans *= -1;
    return ans;
}
string toStr(ll n){
    string ans = "";
    int neg = 0;
    if(n<0){
        neg = 1;
        n *= -1;
    }
    while(n){
        ans = char(n%10+'0')+ ans;
        n /= 10;
    }
    if(neg) ans = "-" + ans;
    return ans;
}
*/
