#include<bits/stdc++.h>
using namespace std;
int s,d,ok;

int main(){
    int t;
    cin>>t;
    while(t--){
        ok = 1;
        cin>>s>>d;
        string str = "";
        while(s>1&&d>1){
            if(s>9){
                str = '9' + str;
                s -= 9;
            }
            else{
                str = (char)((s-1)+'0')+str;
                s = 1;
            }
            d--;
        }
        for(int i=1;i<d;i++) str = '0' + str;
        if(s>9) ok = 0;
        else str = (char)(s+'0')+str;
        if(ok) cout<<str;
        else cout<<-1;
        cout<<endl;
    }
}
