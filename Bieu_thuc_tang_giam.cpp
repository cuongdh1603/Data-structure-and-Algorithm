#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> a;
        vector<string> str;
        for(int i=0;i<10;i++) a.push_back(i+1);
        string s;
        cin>>s;
        int len = s.size();
        for(int i=0;i<len;){
            string res = "";
            for(int j=i;j<len;j++)
                if(s[j]==s[i]) res += s[j];
                else break;
            str.push_back(res);
            i += res.size();
        }
        for(int i=0,j=0;i<10&&j<str.size();j++){
            if(str[j][0]=='D')
                reverse(a.begin()+i,a.begin()+i+str[j].size()+1);
            i += str[j].size();
        }
        for(int i=0;i<=len;i++) cout<<a[i];
        cout<<endl;
    }
}
/*
4
I
D
DD
DDIDDIID
*/
