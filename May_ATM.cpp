#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,ans,d;
ll s;
vector<ll> t,check;
void solve(int start,int step,ll sum){
    if(sum==0){
        d = 1;
        //cout<<step<<endl;
        ans = min(ans,step);
        return;
    }
    else if(sum>0){
        for(int i=start;i<n;i++){
            solve(i+1,step+1,sum-t[i]);
        }
    }
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        cin>>n>>s;
        ans = n;
        d = 0;
        t.resize(n);
        for(int i=0;i<n;i++) cin>>t[i];
        solve(0,0,s);
        cout<<(d?ans:-1);
        cout<<endl;
    }
}
