#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> ans;
void print(){
    int d = 1;
    for(int i=0;i<ans.size()-1;i++)
    if(ans[i]<ans[i+1]){
        d = 0;
        break;
    }
    if(d){
        cout<<'(';
        for(int i=0;i<ans.size();i++){
            if(i==ans.size()-1) cout<<ans[i]<<')';
            else cout<<ans[i]<<' ';
        }
        cout<<' ';
    }
}
void Try(int k,int n){
    if(n==0) print();
    for(int i=n;i>=1;i--){
        ans.push_back(i);
        Try(i,n-i);
        ans.pop_back();
    }
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ans.clear();
        cin>>n;
        Try(1,n);
        cout<<endl;
    }
}
