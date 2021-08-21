#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        a.resize(k);
        for(int i=0;i<k;i++) cin>>a[i];
        int d = 0;
        for(int i=k-1;i>=0;i--){
            if(a[i]<n-k+i+1){
                a[i]++;
                d = 1;
                int v = 1;
                for(int j=i+1;j<k;j++) a[j] = a[i]+j-i;
                break;
            }
        }
        if(d){
            for(int i=0;i<k;i++) cout<<a[i]<<' ';
        }
        else{
            for(int i=1;i<=k;i++) cout<<i<<' ';
        }
        cout<<endl;
    }
}
