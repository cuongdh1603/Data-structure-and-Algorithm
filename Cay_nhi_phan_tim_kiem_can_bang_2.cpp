#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
vector<int> node;
void solve(ll l,ll r){
    if(r<l) return;
    else if(r>=l){
        ll m = l+(r-l)/2;
        //if((r-l)%2==0) m--;
        cout<<node[m]<<' ';
        solve(l,m-1);
        solve(m+1,r);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        node.resize(n);
        for(auto &i:node) cin>>i;
        sort(node.begin(),node.end());
        solve(0,n-1);
        cout<<endl;
    }
}
/*
2

11

40  28  45 38  33  15  25  20  23  35  30

10

1  2  3  4  5  6  7  8  9  10
*/
