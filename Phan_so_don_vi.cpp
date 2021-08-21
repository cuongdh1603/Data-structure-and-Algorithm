#include<bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> ii;
vector<ii> vt;
void solve(ll x,ll y){
    if(x!=0){
        ll u = __gcd(x,y);
        x/=u;
        y/=u;
        ll k = y/x;
        if(k*x<y) k++;
        vt.push_back({1,k});
        if(y!=k){
            x = x*k-y;
            y *=k;
        }
        else{
            x -= 1;
            y = k;
        }
        solve(x,y);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vt.clear();
        ll p,q;
        cin>>p>>q;
        solve(p,q);
        for(int i=0;i<vt.size();i++){
            if(i!=vt.size()-1) cout<<vt[i].first<<'/'<<vt[i].second<<" + ";
            else cout<<vt[i].first<<'/'<<vt[i].second;
        }
        cout<<endl;
    }
}
