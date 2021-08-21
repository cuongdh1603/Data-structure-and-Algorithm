#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<ll>> G;
ll n,k,dem = 0;
vector<ll> a;
bool cmp(vector<ll> x,vector<ll> y){
    int len1 = x.size();
    int len2 = y.size();
    int len = min(len1,len2);
    for(int i=0;i<len;i++){
        if(x[i]>y[i]) return true;
        else if(x[i]<y[i]) return false;
    }
}
void solve(ll st,ll rm,vector<ll> ans){
    if(!rm){
        G.push_back(ans);
        dem++;
        return;
    }
    else if(st<n&&rm>0){
        for(ll i=st;i<n;i++){
            ans.push_back(a[i]);
            solve(i+1,rm-a[i],ans);
            ans.pop_back();
        }
    }
}
int main(){
    cin>>n>>k;
    a.resize(n);
    for(auto &i:a) cin>>i;
    vector<ll> ans;
    solve(0,k,ans);
    sort(G.begin(),G.end(),cmp);
    for(int i=0;i<G.size();i++){
        for(auto j:G[i]) cout<<j<<' ';
        cout<<endl;
    }
    cout<<dem<<endl;
}
/*
5 50

5 10 15 20 25
*/
