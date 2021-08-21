#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
vector<int> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        ll x=0,y=0;
        for(int i=0;i<a.size();i+=2){
            x*=10;
            x+=a[i];
            if(i+1<a.size()){
                y*=10;
                y+=a[i+1];
            }
        }
        cout<<x+y<<endl;
    }
}
