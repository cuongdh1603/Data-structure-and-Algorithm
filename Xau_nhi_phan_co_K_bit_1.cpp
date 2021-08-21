#include<bits/stdc++.h>
using namespace std;
int n,k;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s = "",s1 = "";
        int d0 = n-k,d1 = k;
        for(int i=0;i<d0;i++) s += '0';
        for(int i=0;i<d1;i++) s += '1';
        for(int i=0;i<d1;i++) s1 += '1';
        for(int i=0;i<d0;i++) s1 += '0';
        cout<<s<<endl;
        while(s!=s1){
            for(int i=n-1;i>=0;i--){
                if(s[i]=='0'){
                    s[i] = '1';
                    d1++;
                    d1 -= n-i-1;
                    for(int j=i+1;j<n;j++){
                        s[j] = '0';
                    }
                    break;
                }
            }
            if(d1==k) cout<<s<<endl;
        }
    }
}
