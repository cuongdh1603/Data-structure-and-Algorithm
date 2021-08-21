#include<bits/stdc++.h>
#define ll long long
using namespace std;
int m,n;
vector<ll> P,Q,R;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>m>>n;
        int k = m+n-1;
        P.resize(m);
        Q.resize(n);
        for(auto &i:P) cin>>i;
        for(auto &i:Q) cin>>i;
        R.resize(k);
        for(int i=0;i<k;i++) R[i] = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                R[i+j] += P[i]*Q[j];
        }
        for(int i=0;i<k;i++) cout<<R[i]<<' ';
        cout<<endl;
    }
}
