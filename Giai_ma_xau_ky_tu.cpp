#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll strToInt(string s){
    ll ans = 0;
    for(int i=0;i<s.size();i++)
        ans = ans*10 + (s[i]-'0');
    return ans;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str;
        stack<char> stk;
        for(int i=0;i<str.size();i++){
            if(str[i]!=']'){
                stk.push(str[i]);
            }
            else{
                string rs = "",rsLast = "";
                while(stk.size()&&stk.top()!='['){
                    rs = stk.top() + rs;
                    stk.pop();
                }
                if(stk.size()&&stk.top()=='[') stk.pop();
                string numStr = "";
                int c = 0;
                while (stk.size()&&stk.top()>='0'&&stk.top()<='9'){
                    numStr = stk.top()+numStr;
                    stk.pop();
                    c = 1;
                }
                ll num = (c?strToInt(numStr):1);
                for(ll i=0;i<num;i++) rsLast += rs;
                for(int i=0;i<rsLast.size();i++) stk.push(rsLast[i]);
            }
        }
        string ans = "";
        while (stk.size())
        {
            ans = stk.top() + ans;
            stk.pop();
        }
        cout<<ans<<endl;
    }
}
