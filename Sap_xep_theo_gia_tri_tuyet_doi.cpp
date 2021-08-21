#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,x;
vector<int> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        a.resize(n);
        multimap<int,int> mp;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            mp.insert({abs(x-v),v});
        }
        int i=0;
        for(auto[x,y]:mp) a[i++] = y;
        for(int i=0;i<n;i++) cout<<a[i]<<' ';
        cout<<endl;
    }
}
