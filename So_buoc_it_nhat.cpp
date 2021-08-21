#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a,tmp;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n+1);
        tmp.resize(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        tmp[0] = 0;
        for(int i=1;i<=n;i++){
            int m = 0;
            for(int j=i-1;j>=0;j--)
            if(a[j]<=a[i]&&m<tmp[j])
                m = tmp[j];
            tmp[i] = m+1;
        }
        cout<<n-*max_element(tmp.begin(),tmp.end())<<endl;
    }
}
