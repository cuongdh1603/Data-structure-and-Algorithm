#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> vt;
void in(){
    for(int i=0;i<n;i++) cout<<vt[i]<<' ';
    cout<<endl;
}
void hvi(int step){
    if(step == n){
        in();
        return;
    }
    for(int i=step;i<n;i++){
        swap(vt[i],vt[step]);
        hvi(step+1);
        swap(vt[i],vt[step]);
    }
}
int main(){
    cin>>n;
    vt.resize(n);
    for(int i=0;i<n;i++) cin>>vt[i];
    hvi(0);
}
