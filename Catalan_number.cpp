#include<bits/stdc++.h>
#define ll long long
#define mxn 103
using namespace std;
vector<string> ctl;
char InToCha(int n){
    return char(n + '0');
}
int ChaToIn(char c){
    return c - '0';
}
void chuanHoa(string &a,string &b){
    int l1 = a.size(),l2 = b.size();
    if(l1<l2){
        a.insert(0,l2-l1,'0');
    }
    else
        b.insert(0,l1-l2,'0');
}
string cong(string a,string b){
    string res = "";
    chuanHoa(a,b);
    int temp = 0;
    for(int i=a.size()-1;i>=0;i--){
        int so = ChaToIn(a[i])+ChaToIn(b[i])+temp;
        temp = so/10;
        res.insert(0,1,InToCha(so%10));
    }
    if(temp>0)
        res.insert(0,1,InToCha(temp));
    return res;
}
string nhanNho(string a,char b){
    string res = "";
    int c = ChaToIn(b);
    int temp = 0;
    for(int i=a.size()-1;i>=0;i--){
        int so = ChaToIn(a[i])*c + temp;
        temp = so/10;
        res.insert(0,1,InToCha(so%10));
    }
    if(temp>0)
        res.insert(0,1,InToCha(temp));
    return res;
}
string nhanLon(string a,string b){
    string res = "";
    int l = b.size();
    string str[l];
    for(int i=l-1;i>=0;i--){
        str[i] =  nhanNho(a,b[i]);
        str[i].insert(str[i].size(),l-i-1,'0');
        res = cong(res,str[i]);
    }
    return res;
}
void init(){
    ctl.resize(mxn,"0");
    ctl[0] = ctl[1] = "1";
    for(int i=2;i<mxn;i++){
        string rs = "0";
        for(int j=0;j<i;j++) ctl[i] = cong(nhanLon(ctl[j],ctl[i-j]),ctl[i]);
    }
}
int main(){
    init();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ctl[n+1]<<endl;
    }
}
