#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int d = 0;
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                d = 1;
                for(int j=n-1;j>i;j--){
                    if(a[j]>a[i]){
                        swap(a[i],a[j]);
                        sort(a.begin()+i+1,a.end());
                        break;
                    }
                }
            }
            if(d) break;
        }
        if(!d) for(int i=1;i<=n;i++) cout<<i<<' ';
        else{
            for(int i=0;i<n;i++) cout<<a[i]<<' ';
        }
        cout<<endl;
    }
}
