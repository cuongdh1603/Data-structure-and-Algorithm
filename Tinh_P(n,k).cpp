#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll k;
        string s;
        cin>>k;
        cin.ignore();
        getline(cin,s);
        map<char,ll> mp;
        for(ll i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z') mp[s[i]]++;
        }
        priority_queue<ll,vector<ll>,less<ll>>pq;
        for(auto [x,y]:mp){
        //for(auto it = mp.begin();it != mp.end();it++)
            pq.push(it);
        }
        while(k&&pq.size()){
            int u = pq.top();
            pq.pop();
            u--;
            k--;
            if(u) pq.push(u);
        }
        ll ans = 0;
        while(pq.size()){
            int u = pq.top();
            ans += u*u;
            pq.pop();
        }
        cout<<ans<<endl;
    }
}
/*
2
0
ABCC
1
ABCC
*/
