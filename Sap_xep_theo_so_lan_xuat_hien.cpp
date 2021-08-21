#include<bits/stdc++.h>
using namespace std;
int n;
struct data{
    int v;
    int p;
};
vector<data> a;
bool cmp(data x,data y){
    return (x.p>y.p||(x.v<y.v&&x.p==y.p));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        map<int,int> mp;
        //mp.clear();
        for(int i=0;i<n;i++){
            cin>>a[i].v;
            mp[a[i].v]++;
        }
        for(int i=0;i<n;i++)
            a[i].p = mp[a[i].v];
        sort(a.begin(),a.end(),cmp);
        for(auto i:a) cout<<i.v<<' ';
        cout<<endl;
    }
}



