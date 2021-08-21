#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        vector<int> a,b;
        map<int,int> mp;
        cin>>n>>m;
        a.resize(n);
        b.resize(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            mp[b[i]]++;
        }
        for(auto[x,y]:mp) cout<<x<<' ';
        cout<<endl;
        for(auto[x,y]:mp)
            if(y>1) cout<<x<<' ';
        cout<<endl;
    }
}
