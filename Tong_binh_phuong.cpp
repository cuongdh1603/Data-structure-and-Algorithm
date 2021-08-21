#include<bits/stdc++.h>
#define mx 103
using namespace std;
//int f[mx];
//bool check[mx];
int ans;
void finding(int step,int sum){
    if(sum==0){
        //check = 1;
        ans = min(ans,step);
        //return step;
    }
    else if(sum>0&&step<ans){
        int x = sqrt(sum);
        for(int i=x;i>0;i--){
            finding(step+1,sum-i*i);
        }
    }
}
/*
int solve(int n){
    check = 0;
    int x = sqrt(n),ans = n;
    for(int i=x;i>0;i--){
        if(!check)
        ans = finding(1,n-i*i);
    }
    return ans;
}
*/
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ans = n;
        finding(0,n);
        cout<<ans<<endl;
    }
}
