#include<bits/stdc++.h>
using namespace std;
vector<int> vt;
void nhap(int n){
    for(int i=0;i<n;i++) cin>>vt[i];
}
void in(vector<int> t,int n){
    cout<<'[';
    for(int i=0;i<n;i++){
        if(i==n-1) cout<<t[i]<<']';
        else cout<<t[i]<<' ';
    }
    cout<<' ';
}
void sol(int n){
    int k=1;
    vector<int> temp(n,0);
    if(n==k){
        in(vt,n);
        return;
    }
        for(int i=n;i>0;i--)
        {
            for(int a=0;a<n;a++)
            {
                temp[a]=vt[a];
            }
            for(int j=0;j<n-1;j++)
            vt[j]+=vt[j+1];
            sol(n-1);
            in(temp,n);
            break;
        }
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vt.resize(n+1);
        nhap(n);
        sol(n);
        cout<<endl;
    }
}
/*
1
5
1 2 3 4 5
*/
