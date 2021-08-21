#include<bits/stdc++.h>
using namespace std;
int n,dem = 0;
int a[13];
bool check(int x,int y){
    for(int i=1;i<x;i++){
        if(a[i]==y||x-i==abs(a[i]-y)) return false;
    }
    return true;
}
void solve(int x){
    for(int i=1;i<=n;i++){
        if(check(x,i)){
            a[x] = i;
            if(x==n) dem++;
            solve(x+1);
        }
    }
}
int main(){
    solve(1);
    int t;
    cin>>t;
    while(t--){
        dem = 0;
        cin>>n;
        solve(1);
        cout<<dem<<endl;
    }
}
