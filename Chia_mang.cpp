#include<bits/stdc++.h>
using namespace std;
int n,k,d,sum_a;
vector<int> a;
vector<bool> vs;
void init(){
    d = 0;
    sum_a = 0;
    cin>>n>>k;
    a.resize(n);
    vs.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum_a += a[i];
        vs[i] = false;
    }
}
void Try(int sum,int p,int start){
    if(p==k){
        d = 1;
        return;
    }
    else if(p<=k&&!d){
        for(int i=start;i<n;i++){
            if(!vs[i]){
                if(sum_a/k>sum+a[i]){
                    vs[i] = true;
                    Try(sum+a[i],p,start+1);
                    vs[i] = false;
                }
                else if(sum_a/k==sum+a[i]){
                    vs[i] = true;
                    Try(0,p+1,0);
                    vs[i] = false;
                }
                else return;
            }
        }
    }
}
void solve(){
    if(n>=k&&sum_a%k==0) Try(0,0,0);
    cout<<d<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        solve();
    }
}
/*
2
5 3
2 1 4 5 6
5 3
2 1 5 5 6
*/
