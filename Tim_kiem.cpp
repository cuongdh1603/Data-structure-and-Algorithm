#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,x,v;
int main(){
    int t;
    cin>>t;
    while(t--){
        int d = -1;
        cin>>n>>x;
        while(n--){
            cin>>v;
            if(v==x) d=1;
        }
        cout<<d<<endl;
    }
}
