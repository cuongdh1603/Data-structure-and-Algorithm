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
        for(int i=len-1;i>=0;i--){
            char c = s[i];
            if(isOperator(c)){
                float x = num.top();
                num.pop();
                float y = num.top();
                num.pop();
                if(c=='+') x += y;
                else if(c=='-') x-=y;
                else if(c=='*') x*=y;
                else if(c=='/') x/=y;
                num.push(x);
            }
            else num.push(c-'0');
        }
        cout<<(int)num.top()<<endl;
    }
}
