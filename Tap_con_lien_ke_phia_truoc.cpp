#include<bits/stdc++.h>
using namespace std;
vector<int> x;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,d=0;
        cin>>n>>k;
        x.resize(k+1);
        for(int i=1;i<=k;i++) cin>>x[i];
        for(int i=k;i>1;i--){
            if(x[i]-x[i-1]>1){
                d = 1;
                x[i]--;
                for(int j=i+1;j<=k;j++)
                    x[j] = n-k+j;
                break;
            }
        }
        if(!d&&x[1]>1){
            x[1]--;
            d = 1;
            for(int i=2;i<=k;i++) x[i] = n-k+i;
        }
        if(d){
            for(int i=1;i<=k;i++) cout<<x[i]<<' ';
        }
        else{
            for(int i=n-k+1;i<=n;i++) cout<<i<<' ';
        }
        cout<<endl;
    }
}
