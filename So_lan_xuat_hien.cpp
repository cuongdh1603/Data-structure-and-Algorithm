#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,v,dem = 0;
        cin>>n>>x;
        while(n--){
            cin>>v;
            if(v==x) dem++;
        }
        cout<<(dem?dem:-1)<<endl;
    }
}

