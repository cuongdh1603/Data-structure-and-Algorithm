#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
        string s;
        cin>>n>>s;
        vector<string> str;

        for(int i=0;i<n;i++){
                for(int j=1;j<=n-i;j++){
            string rs = s.substr(i,j);
            str.push_back(rs);}
        }
        sort(str.begin(),str.end());
        for(int i=0;i<str.size();i++) cout<<str[i]<<' ';
        cout<<endl;
    }
}
