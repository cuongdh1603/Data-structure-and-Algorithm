#include<bits/stdc++.h>
using namespace std;
int f[1003][1003];
string s,s1;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = 1;
        cin>>s;
        int len = s.size();
        for(int i=1;i<len;i++){
            int cans = 1,t=2;
            for(int j=i-1;j>=0;j--){
                if(j+t<len&&s[j]==s[j+t]){
                    cans += 2;
                    t+=2;
                }
                else break;
            }
            ans = max(ans,cans);
            t=1;
            cans = 0;
            for(int j=i-1;j>=0;j--){
                if(j+t<len&&s[j]==s[j+t]){
                    cans+=2;
                    t+=2;
                }
                else break;
            }
            ans = max(ans,cans);
        }
        cout<<ans<<endl;
    }
}

