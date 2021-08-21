#include<bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<int,int> ii;
vector<ii> a;
vector<ll> a1;
int main(){
    int t;
    cin>>t;
    while(t--){
        a.clear();
        a1.clear();
        ll n;
        cin>>n;
        ll x = n/4;
        for(ll i=0;i<=x;i++){
            if((n-i*4)%7==0){
                ll k = (n-i*4)/7;
                a.push_back({i,k});
            }
        }
        ll len = a.size(),num = x+1;
        if(len==0) cout<<-1;
        else{
            a1.resize(len);
            for(int i=0;i<len;i++){
                a1[i] = a[i].first+a[i].second;
                num = min(num,a1[i]);
            }
            string min_str = "";
            for(int i=0;i<num;i++) min_str += '7';
            for(int i=0;i<len;i++){
                string res = "";
                if(a1[i]==num){
                    for(int j=0;j<a[i].first;j++) res+='4';
                    for(int j=0;j<a[i].second;j++) res+='7';
                    min_str = min(res,min_str);
                }
            }
            cout<<min_str;
        }
        cout<<endl;
    }
}
