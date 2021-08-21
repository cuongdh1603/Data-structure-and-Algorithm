//please do it by myself!!!
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> a,b;
    cin>>n;
    a.resize(n);
    b.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int d = 0,ans = INT_MAX;
    while(d<=a[0]){
        int tmp = 0;
        bool ok = true;
        for(int i=0;i<n;i++){
            b[i] = a[i]/(d+1)+1;
            if(i&&a[i-1]/b[i-1]!=a[i]/b[i]){
                ok = false;
                break;
            }
            tmp += b[i];
        }
        if(ok) ans = min(ans,tmp);
        d++;
    }
    cout<<ans;
}
