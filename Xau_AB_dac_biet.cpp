#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<string> str;
int main(){
    cin>>n>>k;
    string s = "",rs = "";
    for(int i=0;i<k;i++) s+='A';
    if(k<n) s += 'B';
    for(int i=k+1;i<n;i++) s+='A';
    int dem = 0,d = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'&&(!i||s[i-1]!='A')) d++;
            else if(s[i]=='A'&&s[i-1]=='A') d++;
            else d = 0;
            if(d>=k) dem++;
        }
        if(dem==1) str.push_back(s);
    //str.push_back(s);
    for(int i=0;i<n-k;i++) rs += 'B';
    for(int i=0;i<k;i++) rs += 'A';
    while(s!=rs){
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='A'){
                s[i] = 'B';
                for(int j=i+1;j<s.size();j++)
                    s[j] = 'A';
                break;
            }
        }
        int dem = 0,d = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'&&(!i||s[i-1]!='A')) d++;
            else if(s[i]=='A'&&s[i-1]=='A') d++;
            else d = 0;
            if(d>=k) dem++;
        }
        if(dem==1) str.push_back(s);
    }
    cout<<str.size()<<endl;
    for(int i=0;i<str.size();i++) cout<<str[i]<<endl;
}
