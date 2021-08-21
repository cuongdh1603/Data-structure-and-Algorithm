#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
vector<ii> a;
string s;
vector<string> ans;
set<string> st;
int len1,len2;
void print(string rs){
    string ss = "";
    for(int i=0;i<len1;i++){
        if(s[i]=='('){
            for(int j=0;j<len2;j++){
                if(i == a[j].first){
                    if(rs[j]=='0') ss += s[i];
                    break;
                }
            }
        }
        else if(s[i]==')'){
            for(int j=0;j<len2;j++){
                if(i == a[j].second){
                    if(rs[j]=='0') ss += s[i];
                    break;
                }
            }
        }
        else ss += s[i];
    }
    //cout<<endl;
    if(st.find(ss)==st.end()){
        ans.push_back(ss);
        st.insert(ss);
    }

}
void gen(){
    string fs = "",ls = "";
    for(int i=0;i<len2;i++) fs += '0',ls += '1';
    while(fs!=ls){
        for(int i=len2-1;i>=0;i--){
            if(fs[i]=='1') fs[i] = '0';
            else{
                fs[i] = '1';
                break;
            }
        }
        print(fs);
    }
}
int main(){
    cin>>s;
    len1 = s.size();
    a.clear();
    stack<int> stk;
    for(int i=0;i<len1;i++){
        if(s[i]=='(') stk.push(i);
        else if(s[i]==')'){
            if(stk.size()){
                a.push_back({stk.top(),i});
                stk.pop();
            }
        }
    }
    len2 = a.size();
    sort(a.begin(),a.end());
    gen();
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
}
