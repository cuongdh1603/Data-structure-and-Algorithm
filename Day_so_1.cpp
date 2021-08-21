#include<bits/stdc++.h>
using namespace std;
int t,n;
vector<int> vt;
void nhap(){
    for(int i=0;i<n;i++) cin>>vt[i];
}
void in(){
    if(n>0){
        cout<<'[';
        for(int i=0;i<n;i++){
            if(i==n-1) cout<<vt[i]<<']'<<endl;
            else cout<<vt[i]<<' ';
        }
    }
}
void sol(){
   int k=0,m=n;
   for(int i=m;i>0;i--){
    if(i==k)
        in();
    else{
        in();
        for(int j=0;j<i-1;j++)
        vt[j]+=vt[j+1];
        n--;
        sol();
        }
   }
}
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        vt.resize(n);
        nhap();
        sol();
    }
}
