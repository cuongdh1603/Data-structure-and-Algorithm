#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        cout<<n<<' ';
        int d = 0;
        for(int i=s.size()-2;i>=0;i--){
            if(s[i]<s[i+1]){
                d = 1;
                for(int j=i+1;j<s.size();j++)
                if(s[i]>=s[j]){
                    swap(s[i],s[j-1]);
                    break;
                }
                else if(j==s.size()-1){
                    swap(s[i],s[j]);
                    break;
                }
                sort(s.begin()+i+1,s.end());
            }
            if(d) break;
        }
        cout<<(d?s:"BIGGEST")<<endl;
    }
}
