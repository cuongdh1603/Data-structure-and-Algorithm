#include<bits/stdc++.h>
using namespace std;
int n,x,check;
vector<int> a;
vector<int> ans;
vector<vector<int>> G;
void print(int step){
    vector<int> tmp;
    tmp = ans;
    sort(tmp.begin(),tmp.end());
    G.push_back(tmp);
    /*
    cout<<'[';
    for(int i=0;i<step;i++){
        if(i==step-1) cout<<tmp[i]<<']';
        else cout<<tmp[i]<<' ';
    }
    */
    //cout<<' ';
}
void solve(int start,int step,int sum){
    if(sum==0){
        check = 1;
        print(step);
        return;
    }
    else if(start<n&&sum>0){
        for(int i=start;i<n;i++)
        if(sum>=a[i]){
            ans.push_back(a[i]);
            solve(i,step+1,sum-a[i]);
            ans.pop_back();
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        check = 0;
        cin>>n>>x;
        a.resize(n);
        G.clear();
        for(int i=0;i<n;i++) cin>>a[i];
        ans.clear();
        solve(0,0,x);
        if(!check) cout<<-1;
        else{
            cout<<G.size()<<' ';
            for(int i=0;i<G.size();i++){
                cout<<'{';
                for(int j=0;j<G[i].size();j++){
                    if(j==G[i].size()-1) cout<<G[i][j]<<'}';
                    else cout<<G[i][j]<<' ';
                }
            cout<<' ';
            }
        }
        cout<<endl;
    }
}
/*
[2 2 2 2] [2 2 4] [2 6] [4 4] [8]
*/

