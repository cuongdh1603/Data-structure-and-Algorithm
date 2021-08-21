#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll toStr(string s){
    ll ans = 0;
    int len = s.size();
    for(int i=len-1;i>=0;i--){
        ans += (s[i]-'0')*pow(2,len-i-1);
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<toStr(s1)*toStr(s2)<<endl;
    }
}
