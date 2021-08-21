#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll strToNum(string s){
    ll n = 0;
    for(int i=0;i<s.size();i++){
        n = n*10 + (s[i] - '0');
    }
    return n;
}
int main(){
    vector<ll> vt;
    map<ll,int> mp;
    string s,str,rs;
    cin>>s;
    cin.ignore();
    getline(cin,str);
    stringstream ss(str);

    while (ss>>rs)
    {
        ll num = strToNum(rs);
        if(!mp[num]){
            vt.push_back(num);
            mp[num]++;
        }
    }
    for(int i=0;i<vt.size();i++) cout<<vt[i]<<' ';
}