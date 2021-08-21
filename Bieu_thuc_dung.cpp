#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        ll ans = 0,sum = 0;
        for(ll i=0;i<s.size()-1;i++){
            if(s[i]=='[') sum++;
            else sum--;
            if(sum<0){
                for(ll j=i+1;j<s.size();j++){
                    if(s[j]=='['){
                        swap(s[i],s[j]);
                        ans += j-i;
                        sum = 1;
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
