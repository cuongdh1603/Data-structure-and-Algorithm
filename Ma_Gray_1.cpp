#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> vt = {"0","1"},tmp1,tmp2;
        while(vt[0].size()<n){
            tmp1 = vt;
            tmp2 = vt;
            for(int i=0;i<tmp1.size();i++) tmp1[i] = '0'+tmp1[i];
            for(int i=0;i<tmp2.size();i++) tmp2[i] = '1'+tmp2[i];
            reverse(tmp2.begin(),tmp2.end());
            vt.clear();
            vt.insert(vt.begin(),tmp1.begin(),tmp1.end());
            vt.insert(vt.end(),tmp2.begin(),tmp2.end());
        }
        for(int i=0;i<vt.size();i++) cout<<vt[i]<<' ';
        cout<<endl;
    }
}
