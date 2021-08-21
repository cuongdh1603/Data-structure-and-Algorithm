#include<bits/stdc++.h>
#define mxn 103
using namespace std;
string s1,s2;
int len1,len2;
int f[mxn][mxn];
void solve(){
    memset(f,0,sizeof(f));
    for(int i=0;i<=len2;i++) f[0][i] = i;
    for(int i=0;i<=len1;i++) f[i][0] = i;
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            if(s1[i-1]==s2[j-1]) f[i][j] = f[i-1][j-1];
            else f[i][j] = min(f[i-1][j-1],min(f[i-1][j],f[i][j-1]))+1;
        }
    }
    cout<<f[len1][len2]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        len1 = s1.size();
        len2 = s2.size();
        solve();
    }
}
