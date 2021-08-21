#include<bits/stdc++.h>
#define ll long long
#define mxn 10003
using namespace std;
string s1,s2;
ll a[mxn];
ll mx,mn;
bool isOperator(char c){
    return (c=='+'||c=='-');
}
bool StrIsOperator(string s){
    return (s=="+"||s=="-");
}

string toStr(ll x){
    string ans = "";
    if(x==0) return "0";
    else{
        while(x){
            ans = (char)(x%10 + '0') + ans;
            x/=10;
        }
        return ans;
    }
}
ll toNum(string s){
    ll ans = 0;
    int d = 0;
    if(s[0]=='-') d=1;
    for(int i=(d?1:0);i<s.size();i++){
        ans*=10;
        ans+=(s[i]-'0');
    }
    if(d) ans *= -1;
    return ans;
}
void solve(string s,string op){
    string res1 = "",res2 = "";
    for(int i=0;i<s.size();i++){
        if(s[i]=='*') break;
        else res1 += s[i];
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='^') break;
        else res2 = s[i] + res2;
    }
    mx = max(mx,toNum(res2));
    mn = min(mn,toNum(res2));
    if(op=="+")
    a[toNum(res2)] += toNum(res1);
    else if(op=="-") a[toNum(res2)] -= toNum(res1);
}
string convert(int i,ll v){
    return toStr(v)+"*x^"+toStr(i);
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        mx = 0;
        mn = mxn;
        memset(a,0,sizeof(a));
        string s,op;
        getline(cin,s1);
        s1 = " + " + s1;
        stringstream ss1(s1);
        //cout<<s1<<endl;
        while(ss1>>s){
            //cout<<"=="<<op<<"++"<<endl;
            if(StrIsOperator(s)) op = s;
            else solve(s,op);
        }
        getline(cin,s2);
        s2 = " + " + s2;
        stringstream ss2(s2);
        while(ss2>>s){
            if(StrIsOperator(s)) op = s;
            else solve(s,op);
        }
        for(ll i=mx;i>=0;i--){
            if(a[i]){
                if(i==mx) cout<<a[i]<<"*x^"<<i;
                else{
                    if(a[i]>0) cout<<" + "<<a[i]<<"*x^"<<i;
                    else cout<<" - "<<abs(a[i])<<"*x^"<<i;
                }
            }
        }
        cout<<endl;
        //cout<<s1<<endl<<s2<<endl;
    }
}
/*
5
3*x^8 + 7*x^2 + 4*x^0
11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
3*x^8 + 7*x^2 + 4*x^0
11*x^6 - 9*x^5 + 9*x^2 + 2*x^1 + 3*x^0
3*x^8 + 7*x^2 + 4*x^0
-11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
5*x^2 + 4*x^1 + 2*x^0
-5*x^1 - 5*x^0
5*x^3 + 4*x^2 + 2*x^0
5*x^1 - 5*x^0
*/
