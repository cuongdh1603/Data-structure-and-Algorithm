#include<bits/stdc++.h>
#define ll long long
#define mxn 15
using namespace std;
int num;
ll n,sum,f[mxn][mxn];
int countNum(ll x){
    int dem = 0;
    while(x){
        dem++;
        x/=10;
    }
    return dem;
}
void init(ll x){
    memset(f,0,sizeof(f));
    num = countNum(x);
    sum = 0;
    for(int i=num;i>0;i--){
        f[0][i] = x%10;
        sum += x%10;
        x/=10;
    }
    //for(int i=num;i>0;i--) cout<<f[0][i]<<' ';
    //cout<<endl;
}
void solve(){
    for(int i=1;i<num;i++){
        for(int j=i+1;j<=num;j++){
            f[i][j] = f[i-1][j-1]*10+f[0][j];
            sum += f[i][j];
            //cout<<f[i][j]<<' ';
        }
        //cout<<endl;
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        init(n);
        solve();
    }
}
