#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,res = "";
        cin>>s;
        res += s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]=='0') res += res[i-1];
            else{
                if(res[i-1]=='0') res += '1';
                else res += '0';
            }
        }
        cout<<res<<endl;
    }
}

