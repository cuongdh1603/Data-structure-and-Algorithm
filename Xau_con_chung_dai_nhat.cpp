#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int f[mxn][mxn];
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(f,0,sizeof(f));
        string a,b;
        cin>>a>>b;
        int lena = a.size(),lenb = b.size(),maxlen = 0;
        for(int i=0;i<=lenb;i++) f[0][i] = 0;
        for(int i=0;i<=lena;i++) f[i][0] = 0;
        for(int i=1;i<=lena;i++){
            for(int j=1;j<=lenb;j++){
                if(b[j-1]!=a[i-1]) f[i][j] = max(f[i][j-1],f[i-1][j]);
                else f[i][j] = f[i-1][j-1] + 1;
            }
        }
        cout<<f[lena][lenb]<<endl;
    }
}
