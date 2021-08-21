#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a,f;
int main(){
    cin>>n;
    a.resize(n+1,0);
    f.resize(n+1,0);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        for(int j=i-1;j>=0;j--){
            if(a[i]>a[j]) f[i] = max(f[i],f[j]+1);
        }
    }
    cout<<*max_element(f.begin(),f.end());
}
