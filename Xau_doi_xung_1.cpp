#include<bits/stdc++.h>
using namespace std;
int f[50][50];
string s,s1;
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(f,0,sizeof(f));
        cin>>s;
        s1 = s;
        reverse(s1.begin(),s1.end());
        int len = s.size();
        for(int i=0;i<=len;i++) f[0][i] = f[i][0] = 0;
        for(int i=1;i<=len;i++){
            for(int j=1;j<=len;j++){
                if(s1[i-1]!=s[j-1])
                    f[i][j] = max(f[i-1][j],f[i][j-1]);
                else
                    f[i][j] = f[i-1][j-1] + 1;
            }
        }
        int t = f[len][len];
        cout<<s.size()-t<<endl;
    }

}

