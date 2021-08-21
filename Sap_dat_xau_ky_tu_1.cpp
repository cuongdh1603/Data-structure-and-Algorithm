#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.size();
        map<char,int> mp;
        for(int i=0;i<len;i++)
            mp[s[i]]++;
        int d = 1;
        for(auto[x,y]:mp){
            if(y>(len%2==0?len/2:len/2+1)){
                d = 0;
                break;
            }
        }
        cout<<(d?1:-1)<<endl;
    }
}
