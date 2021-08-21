#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll c1(string s){
    ll ans = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='6') s[i] = '5';
        ans *= 10;
        ans += s[i]-'0';
    }
    return ans;
}
ll c2(string s){
    ll ans = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='5') s[i] = '6';
        ans *= 10;
        ans += s[i]-'0';
    }
    return ans;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<c1(s1)+c1(s2)<<' '<<c2(s1)+c2(s2);
}
