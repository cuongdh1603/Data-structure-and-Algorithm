#include<bits/stdc++.h>
using namespace std;
int n,tmp;
vector<string> str,rs;
void gen(string s){
    if(s.size()==tmp){
        str.push_back(s);
        return;
    }
    else{
        gen(s+'0');
        gen(s+'1');
    }
}
int main(){
    cin>>n;
    tmp = n/2;
    string s = "";
    gen(s);
    if(n&1){
        rs = str;
        vector<string> str2 = str;
        for(int i=0;i<rs.size();i++) reverse(rs[i].begin(),rs[i].end());
        for(int i=0;i<str.size();i++) str[i] += '0',str[i] += rs[i];
        for(int i=0;i<str2.size();i++) str2[i] += '1',str2[i] += rs[i];
        str.insert(str.end(),str2.begin(),str2.end());
    }
    else{
        rs = str;
        for(int i=0;i<rs.size();i++) reverse(rs[i].begin(),rs[i].end());
        for(int i=0;i<str.size();i++) str[i] += rs[i];
    }
    sort(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        for(int j=0;j<str[i].size();j++) cout<<str[i][j]<<' ';
        cout<<endl;
    }
}
