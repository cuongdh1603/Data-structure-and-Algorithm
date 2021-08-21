#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<int> st;
int toNum(string s){
    int ans = 0;
    for(int i=0;i<s.size();i++){
        ans *= 10;
        ans += s[i]-'0';
    }
    return ans;
}
int main(){
    string s,s1,s2;
    while(getline(cin,s,'\n')){
        //cin>>s;
        if(s=="") break;
        else{
            stringstream ss(s);
            ss>>s1;
            ss>>s2;
            //cout<<s1<<' '<<s2<<endl;
            //vector<string> vs(2);
            //int i=0;
            //while(ss>>s1) vs[i++] = s1;
            //cout<<vs[0]<<' '<<vs[1]<<endl;
            if(s1=="show"){
                if(st.empty()) cout<<"empty";
                else{
                    vector<int> val;
                    while(st.size()){
                        int x = st.top();
                        val.push_back(x);
                        st.pop();
                    }
                    for(int i=val.size()-1;i>=0;i--){
                        cout<<val[i]<<' ';
                        st.push(val[i]);
                    }
                }
                cout<<endl;
            }
            else if(s1=="push"){
                st.push(toNum(s2));
            }
            else if(s1=="pop"){
                if(st.size()) st.pop();
            }
        }
    }
}
/*
push 3
push 5
show
push 7
show
pop
pop
show
*/


