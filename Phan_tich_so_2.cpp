#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> ans;
vector<vector<int>> G;
void print(){
    //if(ans.size())
    int d = 1;
    for(int i=0;i<ans.size()-1;i++)
    if(ans[i]<ans[i+1]){
        d = 0;
        break;
    }
    if(d){
        /*
        cout<<'(';
        for(int i=0;i<ans.size();i++){
            if(i==ans.size()-1) cout<<ans[i]<<')';
            else cout<<ans[i]<<' ';
        }
        cout<<' ';
        */
        G.push_back(ans);
    }
}
void Try(int k,int n){
    if(n==0) print();
    for(int i=n;i>=1;i--){
        //cout<<"===="<<i<<endl;
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
        G.clear();
        cin>>n;
        //ans.push_back(n);
        Try(1,n);
        cout<<G.size()<<endl;
        for(int i=0;i<G.size();i++){
            cout<<'(';
            for(int j=0;j<G[i].size();j++){
                if(j==G[i].size()-1) cout<<G[i][j]<<')';
                else cout<<G[i][j]<<' ';
            }
            cout<<' ';
        }
        cout<<endl;
    }
}

