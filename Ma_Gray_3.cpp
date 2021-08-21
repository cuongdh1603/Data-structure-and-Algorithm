#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,res = "";
        cin>>s;
        res += s[0];
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) res += '0';
            else res += '1';
        }
        cout<<res<<endl;
    }
}
