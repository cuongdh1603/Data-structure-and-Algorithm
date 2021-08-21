#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        string a,b;
        cin>>k>>a>>b;
        ll na=0,nb=0;
        int lena = a.size(),lenb = b.size();
        for(int i=lena-1;i>=0;i--) na += (a[i]-'0')*pow(k,lena-i-1);
        for(int i=lenb-1;i>=0;i--) nb += (b[i]-'0')*pow(k,lenb-i-1);
        ll ans = na + nb;
        string str = "";
        while(ans){
            str = (char)(ans%k + '0') + str;
            ans /= k;
        }
        cout<<str<<endl;
    }
}
