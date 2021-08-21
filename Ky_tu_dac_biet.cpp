#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
int len;
string s;
void solve(ll n,ll k){
    if(k<=len){
        cout<<s[n]<<endl;
    }
    else{
       if(n>=k/2+1){
            if(n==k/2+1) solve(n-1,k/2);
            else solve(n-k/2-1,k/2);
        }
        else solve(n,k/2);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s>>n;
        len = s.size();
        s = ' '+s;
        ll k;
        for(int i=1;;i++){
            if(len*pow(2,i)>=n){
                k = len*pow(2,i);
                break;
            }
        }
        solve(n,k);
    }
}
/*
12
COW 8
COW 9
COW 10
COW 11
COW 12
COW 13
COW 14
COW 15
COW 16
COW 17
COW 18
COW 19
*/
