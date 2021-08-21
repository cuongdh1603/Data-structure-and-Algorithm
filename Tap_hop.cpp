#include<bits/stdc++.h>
using namespace std;
int n,k,s,dem;
void solve(int start,int step,int rm){
    if(rm==0&&step==k){
        dem++;
        return;
    }
    else if(rm>0&&step<k){
        for(int i=start;i<=n;i++){
            if(i<=rm){
                solve(i+1,step+1,rm-i);
            }
        }
    }
}
int main(){
    while(1){
        cin>>n>>k>>s;
        if(!n&&!k&&!s) break;
        dem = 0;
        solve(1,0,s);
        cout<<dem<<endl;
    }
}
