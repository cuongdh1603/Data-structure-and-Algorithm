#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,len;
        string s;
        cin>>k>>s;
        len = s.size();
        int j=0;
        while(k){
            if(j<len){
                int d = 0,p;
                char tmp = '0';
                for(int i=j+1;i<len;i++){
                    if(s[i]>s[j]&&s[i]>=tmp){
                        d = 1;
                        tmp = s[i];
                        p = i;
                    }
                }
                if(d){
                     swap(s[j],s[p]);
                     //j++;
                     k--;
                }
                j++;
                //else break;
            }
            else break;
        }
        //if(k%2==1) swap(s[len-2],s[len-1]);
        cout<<s<<endl;
    }
}
