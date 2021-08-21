#include<bits/stdc++.h>
using namespace std;
int v,e;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>v>>e;
        map<int,set<int>> mp;
        int x,y;
        while(e--){
            cin>>x>>y;
            mp[x].insert(y);
            mp[y].insert(x);
        }
        for(auto[x,y]:mp){
            cout<<x<<": ";
            for(auto it:y) cout<<it<<' ';
            cout<<endl;
        }
        cout<<endl;
    }
}

