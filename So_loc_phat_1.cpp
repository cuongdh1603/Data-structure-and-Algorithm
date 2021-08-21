#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=n;i>0;i--){
            string s = "";
            for(int j=1;j<=i;j++) s += '8';
            for(int j=1;j<=pow(2,i);j++){
                cout<<s<<' ';
                for(int k=i-1;k>=0;k--){
                    if(s[k]=='8'){
                        s[k] = '6';
                        break;
                    }
                    else s[k] = '8';
                }
            }
        }
        cout<<endl;
    }
}
