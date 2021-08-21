#include<bits/stdc++.h>
using namespace std;
vector<string> vt;
string s;
void sol(int n){
    if(n == s.size()){
        //cout<<s<<endl;
        vt.push_back(s);
        return;
    }
    for(int i=n;i<s.size();i++){
        swap(s[i],s[n]);
        sol(n+1);
        swap(s[i],s[n]);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vt.clear();
        cin>>s;
        sol(0);
        sort(vt.begin(),vt.end());
        for(int i=0;i<vt.size();i++) cout<<vt[i]<<' ';

        cout<<endl;
    }
}
