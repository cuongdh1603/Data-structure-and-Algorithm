#include<bits/stdc++.h>
#define ll long long
#define N 10005
using namespace std;
int n,k;
vector<int> vt;
void in(){
    for(int i=1;i<=k;i++) cout<<vt[i];
    cout<<' ';
}
void solve(int step){
    for(int i = vt[step-1]+1;i<=n-k+step;i++){
        vt[step] = i;
        if(step==k){
            in();
        }
        else solve(step+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vt.clear();
        vt.resize(k+1);
        vt[0] = 0;
        solve(1);
        cout<<endl;
    }
}




