#include<bits/stdc++.h>
using namespace std;
int chess[10][10];
int a[10],ans;
bool check(int x,int y){
    for(int i=1;i<x;i++)
        if(a[i]==y||x-i==abs(a[i]-y))
        return false;
    return true;
}
void solve(int x){
    for(int i=1;i<9;i++){
        if(check(x,i)){
            a[x] = i;
            if(x==8){
                int sum = 0;
                for(int j=1;j<9;j++) sum += chess[a[j]][j];
                ans = max(ans,sum);
            }
            solve(x+1);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ans = 0;
        for(int i=1;i<9;i++)
            for(int j=1;j<9;j++)
            cin>>chess[i][j];
            solve(1);
        cout<<ans<<endl;
    }
}
