#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
vector<int> a,tmp;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int d = 1;
        for(int i=0;i<n/2;i++){
            if(a[i]>a[n-i-1]) swap(a[i],a[n-i-1]);
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                d = 0;
                break;
            }
        }
        cout<<(d?"Yes":"No")<<endl;
    }
}
