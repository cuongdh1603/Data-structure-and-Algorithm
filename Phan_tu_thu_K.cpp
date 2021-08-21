#include<bits/stdc++.h>
using namespace std;
int m,n,k;
vector<int> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>m>>n>>k;
        a.resize(m+n);
        for(int i=0;i<m+n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        cout<<a[k-1]<<endl;
    }
}
